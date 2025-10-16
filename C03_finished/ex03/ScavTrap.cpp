/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:01:25 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/13 15:17:11 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(){cout << D_SCAVTRAP << endl;}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	cout << CREATE_SCAVTRAP << endl;
    HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage=20;
}
void ScavTrap::attack(str const &target)
{
	 std::stringstream ss;
	 ss << AttackDamage;
	if(HitPoint <= 0) {
			cout << "ScavTrap" << name << "is dead and can't attack! " << endl;
			return ;
		}
	if(EnergyPoint <= 0) {
			cout <<"ScavTrap" << name << "has no enery left"<< endl;
			return;
			}
	EnergyPoint-=1;
	cout << name << " attacks "  << target << " causing " << ss.str() << endl;
}
void ScavTrap::guardGate(){cout << "ScavTrap is now in Gate Keeper mode!" <<endl;}
