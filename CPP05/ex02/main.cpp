#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b("Luffy", 10);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
