/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:29:12 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/06 18:30:14 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a.operator<(b)) ? a : b;
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.operator<(b)) ? a : b;
}
Fixed& Fixed::max(Fixed &a,Fixed &b)
{
	return (a.operator>(b)) ? a : b;
}
const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.operator>(b)) ? a : b;
}

Fixed& Fixed::operator++(){
	return (++this->_rawBits, *this);
}
Fixed& Fixed::operator--(){
	return (--this->_rawBits, *this);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;	
	this->_rawBits++;
	return tmp;
}
Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;	
	this->_rawBits--;
	return tmp;
}
float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_rawBits) / 256.0f;
}
std::ostream& operator<<(std::ostream& os, const Fixed& obj){
	os << obj.toFloat();
	return os;
}
bool Fixed::operator>(const Fixed& other) const
{
	return this->_rawBits > other._rawBits;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

bool Fixed::operator>=(const Fixed& other) const
{
	return this->_rawBits >= other._rawBits;
}

bool Fixed::operator<(const Fixed& other) const
{
	return this->_rawBits < other._rawBits;
}

bool Fixed::operator<=(const Fixed& other) const
{
	return this->_rawBits <= other._rawBits;
}

bool Fixed::operator==(const Fixed& other) const
{
	return this->_rawBits == other._rawBits;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return this->_rawBits != other._rawBits;
}

const int Fixed::fractionel= 8;
Fixed::Fixed(): _rawBits(0){}

Fixed::Fixed(int nb):_rawBits(nb * 256){}

Fixed::Fixed(float nb)
{
	this->_rawBits = static_cast<int>(roundf(nb * 256));
} 

Fixed::Fixed(const Fixed &obj)
{
	this->_rawBits = obj._rawBits;
}
