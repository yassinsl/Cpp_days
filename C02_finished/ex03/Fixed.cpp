/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:20:13 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/07 15:22:22 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int Fixed::fractionel = 8;

float Fixed::toFloat(void) const
{
        return static_cast<float>(this->_rawBits) / 256.0f;
}

Fixed::Fixed(int nb):_rawBits(nb * 256){}

Fixed::Fixed(float nb)
{
        this->_rawBits = static_cast<int>(roundf(nb * 256));
}

