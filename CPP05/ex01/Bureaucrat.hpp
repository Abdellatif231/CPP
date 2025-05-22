#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
    public:
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

        Bureaucrat(void);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		const std::string& getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();
	//	void signForm(Form& form);   <<== Dobule include problem

};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& other);

#endif

