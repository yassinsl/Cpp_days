#pragma once
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

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <sstream>
//TODO: Use runtime::error 
#include <stdexcept>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <map>

//define
#define CANNOT_OPEN_FILE "Error: Could Not Open File: "
typedef std::map<std::string, double> map; 
typedef std::map<std::string, double>::iterator iterator; 

//lower_bound
//Upper_bound
//TODO:: create a FileNotFound class
class FileNotFound : public std::runtime_error{
  public:
    FileNotFound(const std::string &name_file);
    ~FileNotFound() throw();
};
FileNotFound::FileNotFound(const std::string &name_file) : std::runtime_error((std::string(CANNOT_OPEN_FILE) + name_file).c_str()) {}

FileNotFound::~FileNotFound() throw(){}

