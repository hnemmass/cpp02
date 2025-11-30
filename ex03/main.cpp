/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:06:33 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/30 14:05:54 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point inside(3, 3);
    Point outside(10, 10);
    Point on_edge1(5, 5);
    Point on_edge2(5, 0);
    Point vertex(0, 0);

    std::cout << "Triangle: A(0,0), B(10,0), C(0,10)\n\n";

    std::cout << "Point (3,3): " << (bsp(a, b, c, inside) ? "Inside" : "Outside") << std::endl;
    std::cout << "Point (10,10): " << (bsp(a, b, c, outside) ? "Inside" : "Outside") << std::endl;
    std::cout << "Point (5,5): " << (bsp(a, b, c, on_edge1) ? "Inside" : "Outside") << std::endl;
    std::cout << "Point (5,0): " << (bsp(a, b, c, on_edge2) ? "Inside" : "Outside") << std::endl;
    std::cout << "Point (0,0): " << (bsp(a, b, c, vertex) ? "Inside" : "Outside") << std::endl;

    return 0;
}
