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
#include <algorithms>
#include <vector>
#include <sstream>
//TODO: Use runtime::error 
#include <stdexcept>
#include <ctime>
#include <iomanip>
//define
#define CANNOT_OPEN_FILE "Error: Could Not Open File: "
//typedef
//lower_bound
//Upper_bound
//TODO:: create a FileNotFound class
class FileNotFound : public std::runtime_error{
  public:
    FileNotFound(const string &name_file);
    ~FileNotFound() throw;
}
FileNotFound::FileNotFound(const string &name_file){
  std::stringstream ss;
  ss << CANNOT_OPEN_FILE << "<< " << name_file << " >>";
  std::runtime_error(ss.str());
}
FileNotFound::~FileNotFound() throw{}

typedef std::map<std::string, double> map; 
//TODO: Pase Csv file
std::string & remove_spaces(std::string &line)
{
  std::string::size_type first_pos = line.find_first_not_of(" \n\t\r\v");
  std::string::size_type last_pos = line.find_last_not_of(" \n\t\r\v");
  if(first_pos == std::string::npos || last_pos == std::string::npos) return(std::string(""));
  return(line.substr(first_pos, last_pos));
}
bool valid_date(std::string date){
  struct tm;
  if(!strptime(date.c_str(), "%Y-%m-%d", &tm));
    return false;
    if()
}
void parse_cvs(map parse_cs)
{
  std::string line, date, value;
  int pos, value_n;
  std::ifstream file("data.csv", ios::in);
  if(!file.is_open()) throw FileNotFound(std::string("data.cvs")); 
  while(!std::getline(file, line))
  {
    if(!(line = remove_spaces(line));
        throw std::invalid_argument("Error Line is Empty");
    pos = line.find(",");
    // data= 2009-11-122;
    data = remove_space(line.substr(0, pos - 1));
    value = remove(line.substr(pos + 1, line.length()));
    if(!valid_date(data)) && !valid_value(value,value_n))
        throw std::invalid_argument("Error : data invlid")
    parse_cs[data] = value_n; 
  }
}

void PrintLine(const char *msg){
  std::cout << *msg << std::endl;
  exit(1);
}
int main(int ac, char **av)
{
  map parse_data, parse_cs;
  if (ac != 2) 
    PrintLine(CANNOT_OPEN_FILE);
  try{
      parse_cvs(parse_cs);
      parse_input(av[ac - 1]);
  }
  catch(std::exception &e){PrintLine(e.what());} 
}
