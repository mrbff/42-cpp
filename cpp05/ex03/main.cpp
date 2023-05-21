#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{

    try
    {
        Bureaucrat bureaucrat("Hermes", 2);

        Intern someRandomIntern;
        AForm* rrf;

        rrf = someRandomIntern.makeForm("shrubbery creation", "Christmas tree");
        bureaucrat.signForm(*rrf);
        bureaucrat.executeForm(*rrf);
      
        std::cout << std::endl;
        delete rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Adam Smasher");
        bureaucrat.signForm(*rrf);
        bureaucrat.executeForm(*rrf);
        bureaucrat.executeForm(*rrf);
        bureaucrat.executeForm(*rrf);
        bureaucrat.executeForm(*rrf);
        
        std::cout << std::endl;
        delete rrf;
        rrf = someRandomIntern.makeForm("presidential pardon", "Johnny Silverhand");
        bureaucrat.signForm(*rrf);
        bureaucrat.executeForm(*rrf);
        delete rrf;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}