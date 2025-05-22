#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("Luffy", 2);

		std::cout << "A\n------------------------" << std::endl;	
		std::cout << a << std::endl;
		for (int i = 0; i < 10; i++){
			a.incGrade();
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
