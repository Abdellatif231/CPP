#include "Form.hpp"

int main()
{
	try {
		Form a("Luffy", 13, 14);

		std::cout << "A\n------------------------" << std::endl;
		std::cout << a << std::endl;
		for (int i = 0; i < 10; i++){
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
