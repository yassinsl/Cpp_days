#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(1) {
    std::cout << GREEN_DEFAULT_CTOR << std::endl;
}

Bureaucrat::Bureaucrat(const string& name, int grade) : _name(name), _grade(grade) {
    std::cout << GREEN_CTOR << std::endl;
    if (this->_grade < 1)
        throw GradeTooHighException();
    if (this->_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
    std::cout << GREEN_CPY_CTOR << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    std::cout << GREEN_CPY_ASI << std::endl;
    if (this != &other) {
        _grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const string& Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::incrementGrade() {
    if (this->_grade - 1 < 1)
        throw GradeTooHighException();
    --this->_grade;
}

void Bureaucrat::decrementGrade() {
    if (this->_grade + 1 > 150)
        throw GradeTooLowException();
    ++this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return RED_GRADE_TOO_HIGH;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return BLUE_GRADE_TOO_LOW;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}
