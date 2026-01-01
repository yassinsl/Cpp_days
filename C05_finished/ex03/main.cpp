#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
  srand(time(NULL));
    try
    {
      std::cout << "Correct case" << std::endl;
        Intern intern;
        AForm * rff = intern.makeForm("robbotomy request",  "Bender");
        free(rff);
      std::cout << "Incorrect case" << std::endl;
        rff = intern.makeForm("Uknown name",  "Bender");
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}

