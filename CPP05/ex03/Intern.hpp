#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern(void);
        Intern(const Intern& other);
        Intern &operator=(const Intern &other);
        ~Intern();
		AForm* makeForm(std::string name, std::string target) const;
};

#endif

