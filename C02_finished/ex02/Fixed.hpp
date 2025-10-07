/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:58:52 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/06 18:28:17 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#define SCALE 256

class Fixed 
{
public:
	Fixed();                       
	Fixed(int nb);                         
	Fixed(float nb);                       
	Fixed(const Fixed &obj);
	float toFloat(void) const;
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;
	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
private:
    int _rawBits;
    static const int fractionel;
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);
