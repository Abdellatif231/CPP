#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
    std::cout << "copy constructor called" << std::endl;
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
    std::cout << "Assignment constructor calld" << std::endl;
    if (this != &other)
        this->_rates = other._rates;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {
    std::cout << "Destructor called" << std::endl;
}

void BitcoinExchange::loadDatabase(const std::string &filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open database file." << std::endl;
        return;
    }

    std::string line;

    if (!std::getline(file, line)) {
   
        std::cerr << "Error: database file is empty." << std::endl;
        return;
    }

    while (std::getline(file, line)) {
        if (line.empty())
            continue;

        std::stringstream ss(line);
        std::string date;
        std::string rateStr;

        if (!std::getline(ss, date, ','))
            continue;
        if (!std::getline(ss, rateStr))
            continue;

        std::stringstream convert(rateStr);
        float rate;
        convert >> rate;

        _rates[date] = rate;
    }
}

void BitcoinExchange::processInput(const std::string &filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;

    if (!std::getline(file, line))
        return;

    while (std::getline(file, line)) {
        if (line.empty())
            continue;

        std::string date;
        std::string valueStr;

        if (!_splitLine(line, date, valueStr)) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        if (!_isValidDate(date)){
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }

        float value;
        std::stringstream ss(valueStr);
        if (!(ss >> value) || !ss.eof()) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        if (value < 0) {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }

        if (value > 1000) {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        std::map<std::string, float>::const_iterator it = _rates.lower_bound(date);
        if (it == _rates.end() || it->first != date) {
            if (it == _rates.begin()) {
                std::cerr << "Error: no exchange rate available for date " << date << " or earlier." << std::endl;
                continue;
            }
            --it;
        }

        float rate = it->second;
        std::cout << date << " => " << valueStr << " = " << (value * rate) << std::endl;
    }
}

std::string BitcoinExchange::_trim(const std::string &s) const
{
    size_t start = 0;
    while (start < s.length() && (s[start] == ' ' || s[start] == '\t'))
        start++;

    size_t end = s.length();
    while (end > start && (s[end - 1] == ' ' || s[end - 1] == '\t'))
        end--;

    return s.substr(start, end - start);
}

bool BitcoinExchange::_splitLine(const std::string &line, std::string &date, std::string &value) const
{
    size_t pos = line.find('|');
    if (pos == std::string::npos)
        return false;

    date = _trim(line.substr(0, pos));
    value = _trim(line.substr(pos + 1));

    if (date.empty() || value.empty())
        return false;

    return true;
}

bool BitcoinExchange::_isValidDate(const std::string &date) const
{
    if (date.length() != 10)
        return false;

    if (date[4] != '-' || date[7] != '-')
        return false;

    std::string y = date.substr(0, 4);
    std::string m = date.substr(5, 2);
    std::string d = date.substr(8, 2);

    for (int i = 0; i < 4; i++)
        if (y[i] < '0' || y[i] > '9')
            return false;

    for (int i = 0; i < 2; i++)
        if (m[i] < '0' || m[i] > '9')
            return false;

    for (int i = 0; i < 2; i++)
        if (d[i] < '0' || d[i] > '9')
            return false;

    int year = std::atoi(y.c_str());
    int month = std::atoi(m.c_str());
    int day = std::atoi(d.c_str());

    if (month < 1 || month > 12)
        return false;

    if (day < 1 || day > 31)
        return false;
    if (year < 2009)
        return false;

    return true;
}
