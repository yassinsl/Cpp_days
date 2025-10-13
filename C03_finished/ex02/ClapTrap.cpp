/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:31:53 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/13 11:56:07 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(str name) : name(name), HitPoint(10), EnergPoint(10), AttackDamage(0)
{
	cout << FIGHTER_MSG << this->name << FIGHTER_MSG2 << endl;
}

ClapTrap::~ClapTrap(){cout<< FIGHTER_MSG << this->name << FIGHTER_MSG3 << endl;}

void ClapTrap::attack(const std::string& target)
{
		std::stringstream ss;
		ss << this->AttackDamage;

		if(this->HitPoint <= 0) cout << FIGHTER_MSG << this->name << " is dead and can't attack" << endl;
		else if (this->EnergPoint <= 0) cout << FIGHTER_MSG << this->name << " has no energy left" << endl;
		else
			cout << FIGHTER_MSG << this->name << " attacks " << target
				<< " causing " + ss.str() + " points of damage! " <<endl, this->EnergPoint--;
}
void ClapTrap::takeDamage(unsigned int amount)
{	
		std::stringstream ss, ss2;
		ss << amount;
		if(this->HitPoint <= 0) {cout << FIGHTER_MSG << this->name << "is already destroyed"<<endl; 
				return ;}
		this->HitPoint-= amount;
		if(this->HitPoint <= 0) this->HitPoint = 0;
		ss2 << this->HitPoint;
		cout << FIGHTER_MSG << FIGHTER_MSG << this->name <<  " takes " << ss.str()
			 << " Point of damage, remaining HP : " << ss2.str() << endl;
}	
void ClapTrap::beRepaired(unsigned int amount)
{	
	std::stringstream ss, ss2;
	ss << amount;
	if(this->HitPoint <= 0) {cout << FIGHTER_MSG << this->name << " is already destroy and can't repair itself "<<endl;
				return ;}
	if(this->EnergPoint <= 0) {cout << FIGHTER_MSG << this->name << " has no energy to repair" << endl;
				return;}
	this->HitPoint+= amount, this->EnergPoint-=1;
	ss2 << this->HitPoint;
	cout << FIGHTER_MSG << this->name << " repairs itself by " << ss.str() <<" points, total HP: " << ss2.str() << endl;
}
