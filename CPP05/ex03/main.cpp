#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("srubbery creation", "Bender");
	if(!rrf)
		return 1;
	std::cout << "NAME: " << rrf->getName() << std::endl;
	delete rrf;
	system("leaks -q form");
}
