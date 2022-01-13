#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const   _name;
    int const           _gradeToSign;
    int const           _gradeToExecute;
    bool                _isSigned;
protected:
    virtual void	    action() const = 0;
public:
    Form( std::string name = "Form", int grade_req = 150, int grade_exec = 150);
    Form(Form const &other);
    virtual ~Form();

    Form &operator=(Form const &other);

    std::string const   getName() const;
    int                 getGradeToSign() const;
    int                 getGradeToExecute() const;
    bool                getStatus();
    void                beSigned(Bureaucrat const &bur);
    void                execute(Bureaucrat const & executor) const;
    class GradeTooHighException: public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        const char *what() const throw();
    };
    class FormIsNotSignedException: public std::exception
    {
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, Form &form);

#endif
