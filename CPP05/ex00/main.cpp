#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("Luffy", 150);

		std::cout << "A\n------------------------" << std::endl;	
		std::cout << a << std::endl;
		for (int i = 0; i < 10; i++){
			a.decGrade();
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
