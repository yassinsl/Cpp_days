/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:58:52 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/03 20:32:39 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

#define DEFAULT_CN "Default constructor called"
#define INT_CN "Int constructor called"
#define FLOAT_CN "Float constructor called"
#define D_CN "Destructor called"
#define SCALE 256
class Fixed {
public:
    Fixed();                       
    Fixed(int nb);                         
    Fixed(float nb);                       
    Fixed(const Fixed &obj);               
    Fixed& operator=(const Fixed &obj);    
    ~Fixed();
    float toFloat() const;
    int toInt() const;

private:
    int _rawBits;
    static const int fractionel;
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);
