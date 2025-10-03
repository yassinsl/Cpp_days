/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:08:36 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/30 11:28:59 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(str name): name(name), Type(NULL){}
void HumanB::attack(void)
{
        cout 
	   << this->name 
	   << ATTACK_MSG 
           << this->Type->getType() 
	   << endl;
}
void HumanB::setWeapon(Weapon &Type){this->Type = &Type;}


