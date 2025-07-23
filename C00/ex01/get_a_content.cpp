#include "PhoneBook.hpp"
#include <iomanip>
#define HI "\033[1;31m Hello! You're now using your brand-new contact manager.😊\033[0m"
#define TYPING "\033[1;32mPlease Enter ADD Or SEARCH , EXIT: \033[0m"
#define MSG_PURPLE "\033[35mType a contact's index to obtain personal informations: \033[0m"

int Contact::add(Contact *contact, int idx)
{
    std::cout << "Please Enter Your Name: ";
    std::cin >> contact[idx].name;
    std::cout << "Please Enter Your Last Name: ";
    std::cin >> contact[idx].last_name;
    std::cout << "Please Enter Your Nickname: ";
    std::cin >> contact[idx].nickname;
    std::cout << "Please Enter Your Phone Number: ";
    std::cin >> contact[idx].phoneNumber;

    if (contact[idx].name.empty() || contact[idx].last_name.empty())
        return 0;
    else if (contact[idx].nickname.empty() || contact[idx].phoneNumber.empty())
        return 0;
    return 1;
}

void Contact::search(Contact *contact, int idx)
{
     int i;
     if(idx == 0){
          std::cout << "Please Enter a Contact" << std::endl; 
            return;
     }
    std::cout << std::left << std::setw(10) << "Index"
              << " |  " << std::setw(10) << "Name"
            << " |  " << std::setw(15) << "LastName"
              << " |  " << std::setw(10) << "NickName" << std::endl;
    for (i = 0; i < idx; i++) 
        std::cout << std::left << std::setw(10) << i
                 << " |  " << std::setw(10) << contact[i].name
                 << " |  "<< std::setw(15) << contact[i].last_name
                  << " |  "<< std::setw(10) << contact[i].nickname << std::endl;
    std::cout << MSG_PURPLE;
    std::cin >> i;
    if(i < idx)
    {
          std::cout << "Name : " << contact[i].name << std::endl;
          std::cout << "LastName : " << contact[i].last_name << std::endl;
          std::cout << "NickName : " << contact[i].nickname << std::endl;
          std::cout << "PhoneNumber : " << contact[i].phoneNumber << std::endl;
    }
    else {
      std::cout << "\033[2J\033[1;1H";
      Contact::search(contact, idx);
    }
}

PhoneBook::PhoneBook()
{
    this->idx = 0;
    std::cout << HI << std::endl;
    std::string input;

    while (true) {
        std::cout << TYPING;
        std::cin >> input;

        if (input == "ADD") {
            if (this->contacts[this->idx].add(this->contacts, this->idx))
                this->idx++;
        }
        else if (input == "SEARCH") {
            this->contacts[0].search(this->contacts, this->idx);
        }
        else if (input == "EXIT")
            break;
        else 
              std::cout << "\033[2J\033[1;1H";
        if (this->idx == 8)
            this->idx = 0;
    }
}
