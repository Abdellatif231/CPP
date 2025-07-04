#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cstdlib>
# include <iomanip>


class ScalarConverter
{
    private:
        ScalarConverter();
    public:
        static void convert(std::string str);
};

#endif

