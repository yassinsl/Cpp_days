/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:17:56 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/07 15:32:13 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float calculate_area(Point const &a,  Point const &b,  Point const &c)
{
    return (fabs(
        a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
        b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
        c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())
    ) / 2.0f);
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float areaABC = calculate_area(a, b, c);
    float area1 = calculate_area(a, b, point);
    float area2 = calculate_area(b, c, point);
    float area3 = calculate_area(c, a, point);
        return ((fabs(areaABC - (area1 + area2 + area3)) < 1e-6f)
                && area1 > 0 && area2 > 0 && area3 > 0) ? true : false;
}

