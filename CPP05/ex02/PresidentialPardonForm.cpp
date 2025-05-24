#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
    std::cout << "PPF Default constructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other)
{
    std::cout << "PPF Copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "PPF Assignment operator called" << std::endl;
	AForm::operator=(other);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PPF Destructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 145, 137)
{
	std::cout << "PPF Taking constructor called" << std::endl;
}

// Maybe check the form in the base class
void PresidentialPardonForm::_execute(Bureaucrat const & executor) const
{
	if (!this->isSinged())
		throw PresidentialPardonForm::FormNotSignedException();
	else if (executor.getGrade() > this->getExe())
		throw PresidentialPardonForm::GradeTooLowException();
	else
		std::cout << this->getName() << " executed." << std::endl;
	// add a func to do the action in the derived class
}
