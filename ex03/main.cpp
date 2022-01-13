#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern inter;
	Form *form = inter.makeForm("Robotomy request", "Bender");
	Bureaucrat bur("Shrek", 1);

	bur.signForm(*form);
	bur.executeForm(*form);

	delete form;

	form = inter.makeForm("Shrubbery", "Garden");

	bur.executeForm(*form);
	bur.signForm(*form);
	bur.executeForm(*form);

	//delete form;
}
