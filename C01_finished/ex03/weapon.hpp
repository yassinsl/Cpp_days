/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:11:24 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/30 11:46:33 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>

#define cout std::cout
#define endl std::endl
#define R_COLOR "\033[0;31m"
#define R_RESET "\033[0m"
#define G_COLOR "\x1b[32m"
#define G_RESET "\x1b[0m"
#define EMPTY_TYPE R_COLOR "Weapon type is empty\n" R_RESET
#define EMPTY_NEW_TYPE R_COLOR "Weapon new type is empty\n" R_RESET
#define ATTACK_MSG " attacks with their "

typedef std::string str;
class Weapon
{
	private:
		str type;
	public:
		Weapon(const str type);
		const str& getType(void) const;
		void setType(const str & newType);
};
