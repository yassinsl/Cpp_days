/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:57:12 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/03 20:31:44 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& obj) 
{
    os << obj.toFloat();
    return os;
}
int Fixed::toInt(void) const
{
        return(this->_rawBits / SCALE);
}
float Fixed::toFloat(void) const
{
        return (static_cast<float>(this->_rawBits) /SCALE);
}
const int Fixed::fractionel = 8;

Fixed::Fixed():_rawBits(0.0){
        std::cout << DEFAULT_CN << std::endl;
}

Fixed::Fixed(int nb){
        std::cout << INT_CN << std::endl; 
        this->_rawBits = nb * SCALE;
}
Fixed::Fixed(float nb) 
{
        std::cout << FLOAT_CN << std::endl;
        this->_rawBits = static_cast<int>(roundf(nb * SCALE));
}

Fixed::Fixed(const Fixed &obj)
{
        this->_rawBits = obj._rawBits;
}

Fixed& Fixed::operator=(Fixed const &obj)
{
        if(this != &obj) 
                this->_rawBits = obj._rawBits;
        return *this;
}

Fixed::~Fixed(){std::cout << D_CN << std::endl;}

