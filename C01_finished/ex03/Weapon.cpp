/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:14:10 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/30 11:38:38 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

static void ft_error_msg(str msg) 
{
        cout << msg << endl;
}
Weapon::Weapon(const str type)
{
        if(!type.empty()) this->type = type;
        else ft_error_msg(EMPTY_TYPE);
}


const str& Weapon::getType(void) const {return this->type;}

void Weapon::setType(const str &newType)
{
         this->type = newType;
}
   
