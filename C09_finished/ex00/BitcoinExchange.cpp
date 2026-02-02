#include "BitcoinExchange.hpp"
#include <fstream>
#include <climits>

//TODO:: create a FileNotFound class

FileNotFound::FileNotFound(const std::string &name_file) : std::runtime_error((std::string(CANNOT_OPEN_FILE) + name_file).c_str()) {}

FileNotFound::~FileNotFound() throw(){}
//Upper_bound
//TODO:remove spaces form bigen and end the string
std::string remove_spaces(std::string line)
{
  std::string::size_type first_pos = line.find_first_not_of(" \n\t\r\v");
  std::string::size_type last_pos = line.find_last_not_of(" \n\t\r\v");
  if(first_pos == std::string::npos || last_pos == std::string::npos || first_pos > last_pos) 
        throw(std::invalid_argument("Error: Empty Line"));
  return(line.substr(first_pos, last_pos - first_pos + 1));
}

bool valid_date(std::string date){
  struct tm tm;

  if(date.length() != 10 || (date[4] != '-' || date[7] != '-'))
    return false;
  if(!strptime(date.c_str(), "%Y-%m-%d", &tm)) 
    return false;
  if((tm.tm_year + 1900 < 0 &&  (tm.tm_year + 1900) < 2009) || (tm.tm_mon + 1 <= 0 && tm.tm_mon + 1> 12) || (tm.tm_mday <= 0 &&  tm.tm_mday > 31 ))
      return false;
  return true;
}
bool valid_value(std::string &string_value, double &value){
  char *end = NULL;

  value = std::strtod(string_value.c_str(), &end);
  if(!end || *end ||  value < 0.0) {
    if(!end || *end) std::cout << "Error: Invalid Number" << std::endl;
    if(value < 0.0) std::cout << "Error: not a positive number" << std::endl;
    return false;
  }
  else if(static_cast<long long>(value) > 1000){
    std::cout <<  "Error: too large a number" << std::endl;
    return false;
  }
  return true;
}
bool valid_value_cvs(std::string &string_value, double &value){
  char *end = NULL;
  value = std::strtod(string_value.c_str(), &end);
  if(!end || *end ||  value < 0.0)
    return false;
  return true;
}
void parse_cvs(map &parse_cs)
{
  std::string line, date, value;
  int pos;
  double value_n;

  std::ifstream file("data.csv", std::ios::in);
  if(!file.is_open()) throw FileNotFound(std::string("data.cvs"));
  while(std::getline(file, line))
  {
    if(line == "date,exchange_rate") continue;
    line = remove_spaces(line);
    pos = line.find(",");
    date = remove_spaces(line.substr(0, pos));
    date.erase(std::remove(date.begin(), date.end(), ' '), date.end());
    value = remove_spaces(line.substr(pos +  1));
    if(!valid_date(date) || !valid_value_cvs(value,value_n))
        throw std::invalid_argument("Error: Invalid database!!");
    parse_cs[date] = value_n;
  }
}

void print_data(map data, const std::string &date, double value_n)
{
  iterator it = data.lower_bound(date);
  if (it != data.end() && it->first == date)
      std::cout << date << " => " << value_n << " = "
                << it->second * value_n << std::endl;
  else
        std::cout << date << " => " << value_n << " = "
                  << it->second * value_n << std::endl;
}

void parse_input(const char *name, map &data)
{
    std::string line, date, value;
    std::string::size_type pos;
    double value_n;

    std::ifstream file(name, std::ios::in);
    if (!file.is_open())
        throw FileNotFound(std::string(name));
    while (std::getline(file, line))
    {
        if (!line.empty() && line[line.size() - 1] == '\r')
            line.erase(line.size() - 1);
        line = remove_spaces(line);
        if (line == "date | value" || line.empty())
            continue;
        pos = line.find('|');
        if (pos == std::string::npos) {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        date = remove_spaces(line.substr(0, pos));
        value = remove_spaces(line.substr(pos + 1));
        if (!valid_date(date)){
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (!valid_value(value, value_n)) continue;
        print_data(data, date, value_n);
    }
} 

