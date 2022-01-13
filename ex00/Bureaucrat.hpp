#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	std::string const _name;
	unsigned int _grade;
public:
	Bureaucrat( std::string const name = "Noname", int grade = 150 );
	~Bureaucrat();
	std::string const getName() const;
	int 	getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
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
