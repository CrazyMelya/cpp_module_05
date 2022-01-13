# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): Form(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), _target(other._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	Form::operator=(other);
	this->_target = other._target;
	return *this;
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream fout;

	fout.open(this->_target + "_shrubbery");
	if (fout.is_open())
	{
		fout << ". .       .           .        .           . " << std::endl
			<<	"   .          .          .     .            ." << std::endl
			<<	"    .       .       *****    .        .   .  " << std::endl
			<<	" .     .       . *******@***                 " << std::endl
			<<	"    .         ****@**********@***  .    .    " << std::endl
			<<	"              *********************          " << std::endl
			<<	"   .    .    ****@**********@********        " << std::endl
			<<	"       .    *********@***************    .   " << std::endl
			<<	"             *******************@**          " << std::endl
			<<	"    .    .       *@***********      .        " << std::endl
			<<	"                       00                    " << std::endl
			<<	"   .      .     .     000             .      " << std::endl
			<<	"   \"            \"    0000       .     \"   " << std::endl
			<<	"#############################################" << std::endl;
	}
	fout.close();
}
