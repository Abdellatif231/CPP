#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
        ~PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		std::string getTarget() const;
		void action() const;
};

#endif

