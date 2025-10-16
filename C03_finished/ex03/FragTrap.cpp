/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:52:36 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/15 17:44:19 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(FragTrap &obj): ClapTrap(obj){}

FragTrap& FragTrap::operator=(FragTrap &obj)
	{
	if(this != &obj)
		 this->name = obj.name, this->HitPoint = obj.HitPoint,
		 this->EnergyPoint = obj.EnergyPoint, this->AttackDamage = obj.AttackDamage;
	return *this;
}

FragTrap::FragTrap(str name):ClapTrap(name)
{

	HitPoint = 100;
	EnergyPoint = 100;
	AttackDamage = 30;
}
FragTrap::~FragTrap(){cout << C_FRAGTRAP << endl;}

void FragTrap::highFivesGuys(void){cout << "FragTrap " << name << " request a positive high five" << endl;}

