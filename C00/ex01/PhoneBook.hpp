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

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
class PhoneBook
{
	public:
		Contact contacts[8];
    int idx = 0;
}
class Contact{
	private:
		std::string name;
		std::string phoneNumber;
		std::string email;
		std::string address; 
  public:
    void add_fuctions(Contact contact);
}
void contact::add_function
#endif
