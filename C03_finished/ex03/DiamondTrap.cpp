/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:57:42 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/14 15:29:17 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "DiamondTrap.hpp"
DiamondTrap::~DiamondTrap(){cout << "DiamondTrap Destructed" << endl;}
DiamondTrap::DiamondTrap(DiamondTrap &obj):ClapTrap(obj), ScavTrap(obj), FragTrap(obj){}
void DiamondTrap::attack(const str &target)
{
	ScavTrap::attack(target);
}
DiamondTrap& DiamondTrap::operator=(DiamondTrap &obj)
	{
	if(this != &obj)
		 this->name = obj.name, this->HitPoint = obj.HitPoint,
		 this->EnergyPoint = obj.EnergyPoint, this->AttackDamage = obj.AttackDamage;
	return *this;
}

DiamondTrap::DiamondTrap(str name):ClapTrap(name+ "_clap_name"), ScavTrap(name),  FragTrap(name)
{	
	cout << "DiamondTrap Construct Created" << endl;
	this->name = name;
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->AttackDamage = FragTrap::AttackDamage;
}
void DiamondTrap::whoAmI(){
	cout << "name in TrapClap is: " << ClapTrap::name << " | The Diamond name is:  " << this->name << endl;
	}

