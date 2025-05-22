#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"

class Form
{
	private:
		const		std::string name;
		const int	sing;
		const int	execute;
		bool		_signed;

    public:
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

        Form(void);
        Form(const Form& other);
        Form &operator=(const Form &other);
        ~Form();
		Form(const std::string name, const int sing, const int execute);
		const std::string& getName() const;
		int getSing() const;
		int getExe() const;
		bool isSinged() const;
		void beSigned(Bureaucrat& bure);
};

std::ostream& operator<<(std::ostream& stream, const Form& other);

#endif

