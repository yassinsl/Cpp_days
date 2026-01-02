#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
  Bureaucrat Boss("boos", 12);
  Form me("yassin", 120, 1);
  Boss.signForm(me);
}
