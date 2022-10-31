/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:21:06 by carys             #+#    #+#             */
/*   Updated: 2022/10/31 12:23:15 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float _x, const float _y) : x(_x), y(_y) {}

Point::Point(const Point &point) : x(point.getX()), y(point.getY()){}

Point &Point::operator = (const Point &point)
{
    if (this == &point)
        return (*this);
//    x = point.getX();
//    y = point.getY();
    return(*this);    
}

Point::~Point() {}

Fixed const Point::getX() const
{
    return (x);
}

Fixed const Point::getY() const
{
    return (y);
}