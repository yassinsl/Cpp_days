/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:04:03 by ylahssin          #+#    #+#             */
/*   Updated: 2025/07/07 16:55:27 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <iomanip>

#define HI "\033[1;31m Hello! You're now using your brand-new contact manager.😊\033[0m"
#define TYPING "\033[1;32mPlease Enter ADD Or SEARCH , EXIT: \033[0m"
#define MSG_PURPLE "\033[35mType a contact's index to obtain personal informations: \033[0m"
#define ERROR_MSG "\033[31mplease enter just Search or ADD or Exit\033[0m"
#define MSG "\033[32mPLEASE Enter SEARCH OR ADD Or EXIT>> \033[0m"
#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

class Contact {
public:
    std::string name;
    std::string last_name;
    std::string phoneNumber;
    std::string nickname;

    int add(Contact *contacts, int idx);
    void search(Contact *contacts, int idx);
};

class PhoneBook {
public:
    Contact contacts[8];
    int idx;
    PhoneBook();
};
