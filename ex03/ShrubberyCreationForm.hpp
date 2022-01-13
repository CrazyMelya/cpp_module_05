#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string _target;
protected:
	void	action() const;
public:
	ShrubberyCreationForm(std::string target = "Nontarget");
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
};

#endif
