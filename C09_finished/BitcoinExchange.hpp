#pragma once
#include <iostream>
#include <cstdlib>
#include <algorithms>
#include <vector>

void PrintLine(const char *msg){
  std::cout << *msg << std::endl;
  exit(1);
}

int main(int ac, char **av){
  if (ac != 2) 
    PrintLine("Error: Could Not Open File");
}
