/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:05:11 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/30 11:44:39 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(str name, Weapon &Type): name(name), Type(&Type){}

void HumanA::attack(void)
{
  	cout 
	   << this->name 
	   << ATTACK_MSG 
	   << this->Type->getType() 
	   << endl;
}



