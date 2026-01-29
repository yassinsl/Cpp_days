#include <iostream>
#include <noexcept>
#include <algorithm>
#include <stack>
#include <cctype>
//TODO: stack--> using
#define INVALID_ARGS "Error: Invalid Argements" 

void  check_operator(char c){
  return (op == '+' || op == '-' || op == '*' || op == '/');
}

void Reverse_Polish_Notation(char *str){
  int i= -1;
  long long value
  std::stack<int> reverse_stack;

  while(str[++i]){
    if(std::isdigit(str[i]))
      reverse_stack.push_pack(static_cast<int >(str[i]) - 48)
    else if (check_operator(str[i]))
      value = get_value(&reverse_stack)
    else throw(std::invalid_argement("Error : Invalid Operator & Number"));
  }
  std::cout << value << std::endl;
}
int main(int ac, char **av){
  try{
    if(ac =! 2) throw std::invalid_argement(INVALID_ARGS);
    Reverse_Polish_Notation(av[ac - 1]);
    }
  catch(std::exception & e){std::cout << e.what() << std::endl;}
}
//if (!str) return;
//<F16>check operate
//-->8 9 * 9 - 9 -9 - 4 - 1+<--
