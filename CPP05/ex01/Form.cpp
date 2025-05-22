#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : sing(1), execute(150), _signed(false)
{
    std::cout << "Default constructor called" << std::endl;
    if (this->sing < 1 || this->execute < 1)
        throw Form::GradeTooHighException();
    else if (this->sing > 150 || this->execute > 150)
        throw Form::GradeTooLowException();

}

Form::Form(const Form &other) : name(other.name), sing(other.sing), execute(other.execute), _signed(other._signed)
{
    std::cout << "Copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Assignment operator called" << std::endl;
	this->_signed = other._signed;
    return (*this);
}

Form::~Form(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Form::Form(const std::string name, const int sing, const int execute) : name(name), sing(sing), execute(execute), _signed(false)
{
	std::cout << "Constructor taking called" << std::endl;
    if (this->sing < 1 || this->execute < 1)
        throw Form::GradeTooHighException();
    else if (this->sing > 150 || this->execute > 150)
        throw Form::GradeTooLowException();
}

const std::string& Form::getName() const
{
    return this->name;
}

int Form::getSing() const
{
    return this->sing;
}

int Form::getExe() const
{
    return this->execute;
}

bool Form::isSinged() const
{
	return this->_signed;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

void Form::beSigned(Bureaucrat& bure)
{
	if (bure.getGrade() < this->sing)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& stream, const Form& other)
{
	stream << "Name : " << other.getName() << "\nGrade required to sign it : " << other.getSing() << "\nGrade required to execute it : " << other.getExe() << "\nSigned: ";
	if (other.isSinged())
		stream << "True";
	else
		stream << "False";
	return stream;
}
