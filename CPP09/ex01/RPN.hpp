#ifndef RPN_HPP
#define RPN_HPP
#include <stack>
#include <sstream>
#include <cctype>
#include <stdexcept>
#include <iostream>

#include <string>

class RPN {
public:

    RPN(void);
    RPN(const RPN& other);
    RPN &operator=(const RPN &other);
    ~RPN();
    static int evaluate(const std::string& expr);
};

#endif
