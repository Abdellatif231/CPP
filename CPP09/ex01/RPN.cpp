#include "RPN.hpp"

RPN::RPN(void) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

RPN::RPN(const RPN &other) {
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

RPN &RPN::operator=(const RPN &other) {
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

RPN::~RPN(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

int RPN::evaluate(const std::string& expr) {
    std::stack<int> s;
    std::istringstream iss(expr);
    std::string token;
    while (iss >> token) {
        if (token.size() != 1) throw std::runtime_error("Invalid token");
        char c = token[0];
        if (std::isdigit(c)) {
            s.push(c - '0');
        } else {
            if (s.size() < 2) throw std::runtime_error("Not enough operands");
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            int res;
            switch (c) {
                case '+': res = a + b; break;
                case '-': res = a - b; break;
                case '*': res = a * b; break;
                case '/':
                    if (b == 0) throw std::runtime_error("Division by zero");
                    res = a / b;
                    break;
                default: throw std::runtime_error("Invalid operator");
            }
            s.push(res);
        }
    }
    if (s.size() != 1) throw std::runtime_error("Invalid expression");
    return s.top();
}
