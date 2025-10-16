/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search_Contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:32:57 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/04 09:35:45 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

str formatColumn(const str &str, int width)
{
    if ((int)str.size() > width)
        return str.substr(0, width - 1) + ".";
    return str;
}

void printSeparator(int width, int columns) {
    for (int i = 0; i < columns; i++) {
        std::cout << "+" << std::string(width, '-');
    }
    std::cout << "+" << std::endl;
}

void printTable(const PhoneBook &Book) 
{
    int width = 10;
    int columns = 4;

    printSeparator(width, columns);
    std::cout << "|" << std::setw(width) << "Index"
              << "|" << std::setw(width) << "First Name"
              << "|" << std::setw(width) << "Last Name"
              << "|" << std::setw(width) << "Nick Name"
              << "|" << std::endl;
    printSeparator(width, columns);
    for (int i = 0; i < Book.num; i++) {
        std::cout << "|" << std::setw(width) << i
                  << "|" << std::setw(width) << formatColumn(Book.contacts[i].first_name, width)
                  << "|" << std::setw(width) << formatColumn(Book.contacts[i].last_name, width)
                  << "|" << std::setw(width) << formatColumn(Book.contacts[i].nackname, width)
                  << "|" << std::endl;
    }
    printSeparator(width, columns);
}
void print_user(PhoneBook &Book, int num)
{
        if(!(num >= 0 && num <= Book.idx))
        {
                std::cout << ERROR_SEACH; 
                return ;
        }
        std::cout << "Index: " << num << std::endl;
        std::cout << "First Name: " << Book.contacts[num].first_name << std::endl;
        std::cout << "Last Name: " << Book.contacts[num].last_name << std::endl;
        std::cout << "Phone NUMBER: " << Book.contacts[num].phone_number << std::endl;
        std::cout << "Nick Name: " << Book.contacts[num].nackname << std::endl;
        std::cout << "Darck Secret: " << Book.contacts[num].nackname << std::endl;
}

int Contact::Search(PhoneBook &Book)
{
        str num_str;
    if (Book.contacts[0].first_name.empty()
        || Book.contacts[0].last_name.empty()
        || Book.contacts[0].phone_number.empty()
        || Book.contacts[0].darck_secret.empty()
        || Book.contacts[0].nackname.empty())
		return (std::cout << SEARCH_ERROR << std::endl, 1);
        std::cout << FLASH;
        printTable(Book);
        std::cout << CHOOSE_CONTACT;
        if(!std::getline(std::cin, num_str)) return -1;
        if(num_str.empty()) std::cout << ENTER_NUM<< std::endl;
        else print_user(Book, std::atoi(num_str.c_str()));
        return 1;
}
