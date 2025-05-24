#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"


int main()
{
	try {
		Bureaucrat b("Luffy", 10);
		AForm *f = new PresidentialPardonForm("home");
		b.signForm(*f);
		f->_execute(b);
		delete f;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
