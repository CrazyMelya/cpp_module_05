#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string type, std::string name)
{
	switch (std::tolower(type[0]))
	{
		case 's':
			std::cout << "Intern creates " + name << std::endl;
			return new ShrubberyCreationForm(name);
		case 'r':
			std::cout << "Intern creates " + name << std::endl;
			return new RobotomyRequestForm(name);
		case 'p':
			std::cout << "Intern creates " + name << std::endl;
			return new PresidentialPardonForm(name);
		default:
			std::cout << "Intern does not create " + name << std::endl;
			return nullptr;
	}
}
