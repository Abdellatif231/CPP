#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Intern Default constructor called" << std::endl;
    return ;
}

Intern::Intern(const Intern &other)
{
    std::cout << "Intern Copy constructor called" << std::endl;
    (void) other;
    return ;
}

Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Intern Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

Intern::~Intern(void)
{
    std::cout << "Intern Destructor called" << std::endl;
    return ;
}

std::string toLower(std::string s) {
    for (size_t i = 0; i < s.length(); ++i)
        s[i] = std::tolower(s[i]);
    return s;
}

AForm* Intern::makeForm(std::string name, std::string target) const
{
	const char *forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm* objs[3] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};

	name = toLower(name);
	int	pos = -1;

	for(int i = 0; i < 3; i++) {
		if (name == forms[i])
		{
			pos = i;
			break;
		}
	}
	if (pos != -1) {
		for (int i = 0; i < 3; i++)
		{
			if (i != pos)
				delete objs[i];
		}
		std::cout << "Intern creates " << name << std::endl;
		return objs[pos];
	}
	for (int i = 0; i < 3; i++) {
		delete objs[i];
	}
	std::cout << name << ": form name does not exist." << std::endl;
	return nullptr;
}
