# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): Form(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), _target(other._target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	Form::operator=(other);
	this->_target = other._target;
	return *this;
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->_target + " has been pardoned by Zafod Beeblebrox." << std::endl;
}
