/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:17:16 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/30 11:50:32 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "HumanA.hpp"

class HumanA
{
        private:
                str name;
                Weapon *Type;
        public:
                HumanA(str name, Weapon &Type);
                void attack(void);
};

