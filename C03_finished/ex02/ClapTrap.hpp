/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 08:45:55 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/14 18:37:43 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#define  FIGHTER_MSG "\033[1;31m🥊 ClapTrap \033[0m"
#define FIGHTER_MSG2 "\033[1;31m has been created!\033[0m"
#define FIGHTER_MSG3 "\033[1;31m has been destroyed. \033[0m"
#define cout std::cout
#define endl std::endl

typedef std::string str;
class ClapTrap
{
	protected:
			str name;
			int HitPoint, EnergPoint, AttackDamage;
	public:
		ClapTrap(const str name);
		~ClapTrap();
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

