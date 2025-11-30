/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:53:39 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/30 13:38:48 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0),y(0) {}

Point::Point(const float val1, const float val2):x(val1), y(val2) {}

Point::Point(const Point &old): x(old.x), y(old.y)
{
	*this = old;
}

Point &Point::operator=(const Point &other)
{
	(void)other;
	return (*this);
}

Point::~Point() {}

float Point::getx(void) const
{
	return (x.toFloat());
}

float Point::gety(void) const
{
	return (y.toFloat());
}
