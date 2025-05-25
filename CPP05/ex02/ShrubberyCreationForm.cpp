#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
    std::cout << "SSF Default constructor called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
    std::cout << "SSF Copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "SSF Assignment operator called" << std::endl;
	AForm::operator=(other);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "SSF Destructor called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
	std::cout << "SSF Taking constructor called" << std::endl;
}

void ShrubberyCreationForm::action() const
{
	std::ofstream file(this->getName() + "_shrubbery");
	if (!file) {
		std::cerr << "Error opening the file" << std::endl;
		return;
	}
	file << "     /\\\n";
	file << "    /**\\\n";
	file << "   /****\\\n";
	file << "  /******\\\n";
	file << " /********\\\n";
	file << "    ||\n";
	file.close();
}
