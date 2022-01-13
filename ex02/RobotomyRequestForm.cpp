# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequest", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): Form(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), _target(other._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	Form::operator=(other);
	this->_target = other._target;
	return *this;
}

void RobotomyRequestForm::action() const
{
	std::string noises[3] = {"bzzzzzzzz-bzzzzzzzzz", "drrrrrr", "booooom"};
	std::srand(std::time(NULL));

	std::cout << noises[std::rand() % 3] << std::endl;

	if (std::rand() % 2)
		std::cout << this->_target + " has been robotomized successfuly!" << std::endl;
	else
		std::cout << this->_target + "'s robotomize failed. This is fiasco, bro!" << std::endl;
}
