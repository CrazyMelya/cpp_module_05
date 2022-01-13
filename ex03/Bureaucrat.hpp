#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
public:
	Bureaucrat( std::string const name = "Noname", int grade = 150 );
	~Bureaucrat();
	std::string const getName() const;
	int 	getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	void	signForm(Form &form);
	void	executeForm(Form const & form);
	class GradeTooHighException: public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur);

#endif
