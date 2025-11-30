/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:53:24 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/30 14:04:25 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
		
	public:
		Point();
		Point(const float val1, const float val2);
		Point(const Point &old);
		Point &operator=(const Point &other);
		~Point();

		float getx(void) const;
		float gety(void) const;
};

#endif