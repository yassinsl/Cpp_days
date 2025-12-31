#include "AForm.hpp"
#include "ShrbberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  srand(time(NULL));
    try
    {
        Bureaucrat boss("Boss", 1);
        Bureaucrat intern("Intern", 150);

        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robo("Bender");
        PresidentialPardonForm pardon("Arthur Dent");

        intern.signForm(shrub);
        intern.executeForm(shrub);

        boss.signForm(robo);
        boss.signForm(pardon);

        intern.executeForm(robo);

        boss.executeForm(shrub);
        boss.executeForm(robo);
        boss.executeForm(pardon);
    }
    catch (std::exception &e){
        std::cout << "Exception caught in main: " << e.what() << std::endl;
    }
}

