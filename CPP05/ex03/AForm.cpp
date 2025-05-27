#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : sing(1), execute(150), _signed(false)
{
    std::cout << "Default constructor called" << std::endl;
}

AForm::AForm(const AForm &other) : name(other.name), sing(other.sing), execute(other.execute), _signed(other._signed)
{
    std::cout << "Copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "Assignment operator called" << std::endl;
	this->_signed = other._signed;
    return (*this);
}

AForm::~AForm(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

AForm::AForm(const std::string name, const int sing, const int execute) : name(name), sing(sing), execute(execute), _signed(false)
{
	std::cout << "Constructor taking called" << std::endl;
    if (this->sing < 1 || this->execute < 1)
        throw AForm::GradeTooHighException();
    else if (this->sing > 150 || this->execute > 150)
        throw AForm::GradeTooLowException();
}

const std::string& AForm::getName() const
{
    return this->name;
}

int AForm::getSing() const
{
    return this->sing;
}

int AForm::getExe() const
{
    return this->execute;
}

bool AForm::isSinged() const
{
	return this->_signed;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form Not Signed";
}

void AForm::beSigned(Bureaucrat& bure)
{
	if (bure.getGrade() < this->sing)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& stream, const AForm& other)
{
	stream << "Name : " << other.getName() << "\nGrade required to sign it : " << other.getSing() << "\nGrade required to execute it : " << other.getExe() << "\nSigned: ";
	if (other.isSinged())
		stream << "True";
	else
		stream << "False";
	return stream;
}

void AForm::_execute(Bureaucrat const & executor) const
{
	if (!this->isSinged())
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getExe())
        throw AForm::GradeTooLowException();
	else
		this->action();
}
