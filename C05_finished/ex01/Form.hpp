#include "Bureaucrat.hpp"

typedef std::string string;

class Form {
  private:
    const string name;
    bool isSigned;
    const int gradeTosign;
    int gradeToExecute;

    Form();
    ~Form();
    void besigned(Bureaucrat &obj);
    const string & getName();

  public:
    class GradeTooHighException:public std::exception{
      public: virtual const char *what() const throw();
    };
    class GradeTooLowException:public std::exception{
      public: virtual const char *what() const throw();
    };
};
