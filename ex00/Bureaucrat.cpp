#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

std::string const Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void    Bureaucrat::incrementGrade()
{
    if (this->_grade - 1 < 1)
        throw GradeTooHighException();
    this->_grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (this->_grade + 1 > 150)
        throw GradeTooLowException();
    this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur)
{
    os << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return os;
}
