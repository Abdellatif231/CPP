#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

static bool isCharLiteral(const std::string &str) {
    return str.length() == 3 && str[0] == '\'' && str[2] == '\'';
}

static bool isFloatPseudo(const std::string &str) {
    return str == "nanf" || str == "+inff" || str == "-inff";
}

static bool isDoublePseudo(const std::string &str) {
    return str == "nan" || str == "+inf" || str == "-inf";
}

static bool characters(std::string &str)
{
    if (isCharLiteral(str))
    {
        char value = str[1];

        std::cout << "char: '" << value << "'\n";
        std::cout << "int: " << static_cast<int>(value) << "\n";
        std::cout << "float: " << static_cast<float>(value) << ".0f\n";
        std::cout << "double: " << static_cast<double>(value) << ".0\n";
        return true;
    }

    if (isFloatPseudo(str))
    {
        float f = std::strtof(str.c_str(), NULL);

        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: " << str << "\n";
        std::cout << "double: " << static_cast<double>(f) << "\n";
        return true;
    }

    if (isDoublePseudo(str)) {
        double d = std::strtod(str.c_str(), NULL);

        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: " << static_cast<float>(d) << "f\n";
        std::cout << "double: " << str << "\n";
        return true;
    }
    return false;
}

static bool isValid(std::string &str)
{
    size_t i = 0;
    bool has_digit = false;
    bool has_dot = false;
    bool has_f = false;

    if (str[i] == '+' || str[i] == '-')
        i++;

    for (; i < str.length(); ++i)
    {
        if (std::isdigit(str[i])) {
            has_digit = true;
        }
        else if (str[i] == '.') {
            if (has_dot)
                return false;
            has_dot = true;
        }
        else if (str[i] == 'f') {
            if (i != str.length() - 1 || has_f)
                return false;
            has_f = true;
        }
        else
            return false;
    }

    return has_digit;  
}
static bool numbers(std::string &str)
{
    if (!isValid(str))
        return false;

    double value = std::strtod(str.c_str(), NULL);

    if (value < 0 || value > 127)
        std::cout << "char: impossible\n";
    else if (!std::isprint(value))
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: '" << static_cast<char>(value) << "'\n";

    std::cout << "int: " << static_cast<int>(value) << "\n";
    std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(value) << "f\n";
    std::cout << "double: " << std::fixed << std::setprecision(2) <<  static_cast<double>(value) << std::endl; 
    return true;
}

void ScalarConverter::convert(std::string str)
{
    if (characters(str))
        return;
    else if (numbers(str))
        return;
    else
        std::cout << "invalid input" << std::endl;
}
