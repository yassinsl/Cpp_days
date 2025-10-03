/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:58:45 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/02 10:58:06 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define cout std::cout
#define endl std::endl
#define D_CONSTRUCTOR "Default constructor called"
#define CP_CONSTRUCTOR "Copy constructor called"
#define CP_ASSIGNMENT "Copy assignment operator called"
#define F_ONE "getRawBits member function called"
#define F_TWO "setRawBits member function called"
#define DCONSTRUCTOR "Destructor called"

class Fixed{
	private:
		int fixed;
		static int Fractional_Bits;
	public:
		Fixed();
		Fixed(Fixed &Obj);
		Fixed& operator=(const Fixed &other); 
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
