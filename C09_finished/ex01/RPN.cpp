#include "RPN.hpp"

void GetNumber(int &right, int &left, std::stack<int> &stack)
{
  right = stack.top();
  stack.pop();
  left = stack.top();
  stack.pop();
}
void add(std::stack<int> & stack)
{
  int right, left;
  GetNumber(right, left, stack);
  stack.push(left + right);
}

void sub(std::stack<int>&stack){
  int right, left;

  GetNumber(right, left, stack);
  stack.push(left - right);
}

void mul(std::stack<int> &stack){
  int right, left;

  GetNumber(right, left, stack);
  stack.push(left * right);
}

void dive(std::stack<int> & stack)
{
  int right, left;

  GetNumber(right, left, stack);
  if(!right) throw std::runtime_error("Math Error: Attempted to divide no zero!");
  stack.push(left / right);
}

size_t check_operator(char op){
  std::string ops = "+-*/";
  return(ops.find(op));
} 

void Reverse_Polish_Notation(char *str)
{
  std::stack<int> stack;
  size_t lc;
  void (*calucaltion[4])(std::stack<int>&) = {add, sub, mul ,dive};

  for(int i = 0; str[i]; i++){
    if(std::isspace(str[i])) continue;
    else if(std::isdigit(str[i]))
      stack.push(atoi(&str[i]));
    else if((lc =check_operator(str[i]))  != std::string::npos && stack.size() >= 2)
      calucaltion[lc](stack);
    else throw std::invalid_argument("Error");
  }
  if(stack.size() > 1) throw std::invalid_argument("Error");
  std::cout  << stack.top() << std::endl;
}