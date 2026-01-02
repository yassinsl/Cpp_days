#pragma once

#include <iostream>
#include <string>
#include <exception>

typedef std::string string;

#define BLUE_GRADE_TOO_LOW  "\033[34mGrade is too low 🔻\033[0m"
#define RED_GRADE_TOO_HIGH  "\033[31mGrade is too high 🔺\033[0m"
#define GREEN_DEFAULT_CTOR  "\033[32mdefault constructor called 🟢\033[0m"
#define GREEN_CTOR          "\033[32mconstructor called 🟢\033[0m"
#define GREEN_CPY_CTOR      "\033[32mcopy constructor called 🟢\033[0m"
#define GREEN_CPY_ASI       "\033[32mcopy assignement called 🟢\033[0m"

class Form;
class Bureaucrat {
private:
    int          grade;
    const string name;
public:
    Bureaucrat();
    Bureaucrat(const string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

    const string& getName() const;
    int           getGrade() const;

    void incrementGrade();
    void decrementGrade();
    void signForm(Form& other) const; 
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
