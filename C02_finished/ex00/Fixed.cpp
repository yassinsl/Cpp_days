/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:38:25 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/02 10:57:14 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::Fractional_Bits = 8;

Fixed::Fixed(): fixed(0){cout << D_CONSTRUCTOR <<endl;}

Fixed::Fixed(Fixed &Obj)
{
        cout << CP_CONSTRUCTOR << endl;
        this->fixed = Obj.fixed;
        this->Fractional_Bits = Obj.Fractional_Bits;
}

Fixed& Fixed::operator=(const Fixed &other)
{
        cout << CP_CONSTRUCTOR << endl;
        if(this == &other) return *this;
        this->fixed = other.fixed;
        return *this;
}

int Fixed::getRawBits( void ) const
{
        cout << F_ONE << endl;
        return this->fixed;
}

void Fixed::setRawBits( int const raw )
{
        cout << F_TWO << endl;
        this->fixed = static_cast<int> (raw);
}

Fixed::~Fixed(){cout << DCONSTRUCTOR << endl;}
