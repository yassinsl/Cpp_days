#pragma once

#include <iostream>
#include <cstdlib>
#include <algorithms>
#include <vector>
#include <sstream>
//TODO: Use runtime::error 
#include <stdexcept>
//define
#define CANNOT_OPEN_FILE "Error: Could Not Open File"
//typedef
typedef std::map<std::string,std::vector<int>> map; 

void PrintLine(const char *msg){
  std::cout << *msg << std::endl;
  exit(1);
}
/* 
void paring_data()
void parse_input(const char *file_name, map &map){
  std::string line;
  std::iostream Input_File(file_name);
  //parsing 
  if(!Input_File.is_open()) throw std::runtime_error(CANNOT_OPEN_FILE);
  while(!std::getline(Input_File, line)){

    paring_data(line, map)
  }
} 
*/
void parse_cs(mao)
int main(int ac, char **av)
{
  map parse_data, parse_cs;
  if (ac != 2) 
    PrintLine(CANNOT_OPEN_FILE);
  try:
    parse_cvs(parse_cs);
   // parse_input(av[ac - 1], parse_data);
  catch(std::exception &e){PrintLine(e.what());} 
}
