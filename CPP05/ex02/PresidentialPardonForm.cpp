#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
    std::cout << "PPF Default constructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target)
{
    std::cout << "PPF Copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "PPF Assignment operator called" << std::endl;
	AForm::operator=(other);
	this->target = other.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PPF Destructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5), target(target)
{
	std::cout << "PPF Taking constructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->target;
}

void PresidentialPardonForm::action() const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
