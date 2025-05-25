#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
    std::cout << "RRf Default constructor called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
    std::cout << "RRF Copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm&other)
{
    std::cout << "RRF Assignment operator called" << std::endl;
	AForm::operator=(other);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RRF Destructor called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
	std::cout << "RRF Taking constructor called" << std::endl;
}

void RobotomyRequestForm::action() const
{
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->getName() << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "The robotomy of " << this->getName() << " failed." << std::endl;
}
