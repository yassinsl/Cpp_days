/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:04:03 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/19 17:46:16 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>
#include <string>

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
