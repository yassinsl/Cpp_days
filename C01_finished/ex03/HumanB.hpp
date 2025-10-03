/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:15:34 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/30 11:50:54 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "weapon.hpp"
class HumanB
{
        private:
                str name;
                Weapon *Type;
        public:
                HumanB(str name);
                void setWeapon(Weapon &Type);
                void attack(void);
        
};
