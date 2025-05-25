#ifndef AFORM_HPP
# define AFORM_HPP
#include <iostream>

class Bureaucrat;

class AForm
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

		class FormNotSignedException : public std::exception {
			public:
				const char* what() const throw();
		};

        AForm(void);
        AForm(const AForm& other);
        AForm &operator=(const AForm &other);
        virtual ~AForm();
		AForm(const std::string name, const int sing, const int execute);
		const std::string& getName() const;
		int getSing() const;
		int getExe() const;
		bool isSinged() const;
		void beSigned(Bureaucrat& bure);
		virtual void action() const = 0;
		void _execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& stream, const AForm& other);

#endif

