# include "Form.hpp"

Form::Form(std::string name, int grade_req, int grade_exec): _name(name), _gradeToSign(grade_req), _gradeToExecute(grade_exec), _isSigned(false)
{
    if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw GradeTooLowException();
    if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
        throw GradeTooHighException();
}

Form::~Form()
{
}

Form::Form(Form const &other): _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute), _isSigned(other._isSigned)
{
}

Form &Form::operator=(Form const &other)
{
    this->_isSigned = other._isSigned;
    return *this;
}

std::string const Form::getName() const
{
    return _name;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

bool    Form::getStatus()
{
    return _isSigned;
}

void    Form::beSigned(Bureaucrat const &bur)
{
    if (this->_gradeToSign < bur.getGrade())
        throw GradeTooLowException();
    this->_isSigned = true;     
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form grade is too low";
}

std::ostream &operator<<(std::ostream &os, Form &form)
{
    os << form.getName() << std::endl 
        << "Grade to sign: " << form.getGradeToSign() << std::endl
        << "Grade to execute: " << form.getGradeToExecute() << std::endl
        << "Status: " << form.getStatus();
    return os;
}
