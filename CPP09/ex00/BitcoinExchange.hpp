#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <cstdlib>

class BitcoinExchange {
    private:
        std::map<std::string, float> _rates;
        std::string _trim(const std::string &s) const;
        bool _splitLine(const std::string &line, std::string &date, std::string &value) const;
        bool _isValidDate(const std::string &date) const;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();

        void loadDatabase(const std::string &filename);
        void processInput(const std::string &filename);
};

#endif
