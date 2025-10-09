/* ****************************t of damage  Remaining HP 5
🥊 ClapTrap Reda repairs itself, restoring 8hit po********************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:36:56 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/08 15:48:12 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#define  FIGHTER_MSG "\033[1;31m🥊 ClapTrap \033[0m"
#define FIGHTER_MSG2 "\033[1;31m has been created!\033[0m"
#define FIGHTER_MSG3 "\033[1;31m has been destroyed. \033[0m"
#define cout std::cout
#define endl std::endl

typedef std::string str;
class ClapTrap
{
	private:
			str name;
			int HitPoint, EnergPoint, AttackDamage;
	public:
		ClapTrap(const str name);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	    	str getName(void);
    		int getattackDamage(void);
		void setHitPoints(int hp);
		void setEnergyPoints(int ep);
		void setAttackDamage(int dmg);
};
