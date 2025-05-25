#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat luffy("Luffy", 2);
	ShrubberyCreationForm shrubbery("home");
    RobotomyRequestForm robotomy("office");
    PresidentialPardonForm pardon("Kaizoku");

	luffy.signForm(shrubbery);
	luffy.signForm(robotomy);
	luffy.signForm(pardon);

	try {
		luffy.executeForm(shrubbery);
        luffy.executeForm(robotomy);
        luffy.executeForm(pardon);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
