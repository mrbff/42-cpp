#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref) : AForm(ref), _target(ref._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& ref)
{
    (void)ref;
    return *this;
}

void    ShrubberyCreationForm::execute( const Bureaucrat& executor) const
{
    if ( this->isSigned() == false)
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getGradeToExec() ) {
        throw AForm::GradeTooLowException();
    }

    std::ofstream file( this->getName() + "_shrubbery" );
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠆⠀⠀⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠴⠋⠀⠀⠀⠀⠀⠀⢠⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⢠⠐⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⢰⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠘⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠇⠀⠀⠀⠀⠀⡼⠇⠀⠀⠀⠘⡆⠀⠀⠐⠀⠀⠀⢀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠈⠓⠢⢼⠀⠀⠀⠀⠀⠀⠀⠀⣾⠀⠀⠀⠀⣠⠎⠀⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠈⣇⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⢠⠇⠀⠀⠀⡰⠃⠀⠀⠀⠀⠀⠀⢀⡼⡇⠀⠀⠀⠀⠀⠀⢸⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⣸⠀⠀⠀⡼⠁⠀⠀⠀⠀⠀⠀⢠⠞⠀⢹⡄⠀⠀⠀⠀⠀⠘⡇⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠀⠀⠀⠀⠀⠀⠀⢀⡇⠀⠀⣰⠁⠀⠀⠀⠀⠀⠀⣰⠋⠀⠀⠘⣧⠀⠀⠀⠀⠀⠀⢹⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⣼⠋⠀⠀⠀⠀⠀⠀⠀⡟⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⡴⠃⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⢸⡇" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⢰⠋⠀⠀⠀⠀⠀⠀⢀⡾⠀⠀⠀⠀⠛⠀⠀⠀⠀⠀⢸⡁⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⢸⡇" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⢠⡏⠀⠀⠀⠀⠀⠀⢀⡞⠁⠀         ⠀⢷⠀⠀⠀⠀⢰⡇⠀⠀⠀⠀⠀⠀⡾⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⡞⠀⠀⠀⠀⠀⠀⠀⣼⣥⣤⣤⣤⣤⣤⣤⣤⣀⣀⣀⣀⠀⠈⢧⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⢀⡇⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⢸⠁⠀⠀⠀⠀⠀⠀⡼⠁⠀⠀⠀⠀⠉⠙⠻⢿⣿⣿⣿⣿⣿⣿⠛⢦⠀⠀⢸⡇⠀⠀⠀⠀⠀⢸⡇⠀" << std::endl;
    file << "⠀⠀⠀⠀⢠⡏⠀⠀⠀⠀⠀⠀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⠳⠀⢳⡀⢹⡇⠀⠀⠀⠀⠀⡾⡇⠀" << std::endl;
    file << "⠀⠀⠀⠀⡞⠀⠀⠀⠀⠀⠀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⡿⠘⠀⠀⠹⣼⡇⠀⠀⠀⠀⢠⠇⠀⠀" << std::endl;
    file << "⠀⠀⠀⣰⠃⠀⠀⠀⠀⠀⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⡿⠁⠀⠀⠀⠀⠘⣇⠀⠀⠀⠀⡾⠀⠀⠀" << std::endl;
    file << "⠀⠀⢠⡏⠀⠀⠀⠀⠀⡼⠁⠀⠀⠀*⠀  ⠀⠀⠀⠀ ⠀⠀⠀⢿⠁⠀⠀⠀⠀⠀⠀⠸⡄⠀⠀⢸⠁⠀⠀⠀" << std::endl;
    file << "⠀⠀⡾⠀⠀⠀⠀⠀⡾⠁⠀⠀⠀...⠀⠀  ⠀ ⠀⠀⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀⡟⠀⠀⠀⠀" << std::endl;
    file << "⠀⣴⠓⣾⣳⣀⢀⡼⠁⠀⠀⠀..... ⠀⠀  ⠀⠀⠀⠀⢻⡇⠃⠀⠀⠀⠀⠀⠀⢸⡇⢀⠇⠀⠀⠀⠀" << std::endl;
    file << "⣾⠃⠀⠀⠀⠑⡟⠁⠀⠀⠀....... ⠀⠀⠀  ⠀⠀⣾⠃⠀⠀⠀⠀⠀⠀⠀⠈⡇⢸⠀⠀⠀⠀⠀" << std::endl;
    file << "⠹⡀⠀⠀⠀⠀⠹⣆⠀⠀⠀⠀⠀⠀|⠀⠀⠀⠀⠀⠀  ⠀⠀⢀⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⣾⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⢳⡄⠀⠀⠀⠀⠘⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡇⣿⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⣷⡄⠀⠀⠀⠀⠙⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠃⡏⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⢀⡇⢹⣄⠀⠀⠀⠀⣀⠉⠓⠶⢄⡀⠀⠀⠀⠀⠀⢀⣠⠴⠋⠣⣄⠀⠀⠀⠀⠀⠀⠀⠀⢠⠟⣸⣧⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⣴⣿⠋⠘⣆⠀⢰⠶⠤⢍⣛⣶⠤⠿⣷⣦⡀⠒⠚⡟⠀⠀⠀⠀⠈⠛⠢⠤⡄⠀⠀⢀⡴⢯⠴⣳⠇⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠉⠀⠀⠘⢦⡈⠻⣖⠤⣤⣉⣉⣹⣯⣭⠉⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⠛⣫⣼⠃⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠑⣄⠉⢦⡀⠀⠀⠈⠉⠁⠀⠀⣸⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⢿⣷⢚⡝⠁⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⢶⣷⠇⠀⠀⠀⠀⠀⣠⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⠷⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
    file.close();
}
