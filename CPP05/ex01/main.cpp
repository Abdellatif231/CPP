#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b("Luffy", 10);
		Form a("X34", 13, 14);

		std::cout << "A\n------------------------" << std::endl;
		std::cout << a << std::endl;

		std::cout << "\nB\n------------------------" << std::endl;
		std::cout << b << std::endl;

		std::cout << "\n=====================\nsigning the form\n" << std::endl;
		b.signForm(a);
		std::cout << "\nprint the form\n" << a << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << "\n" << std::endl;
	}
}
