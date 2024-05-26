/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/28 15:03:08 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/26 15:15:07 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed(5.05f)*Fixed(2) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << "-------------------------" << std::endl;
    
    Fixed c(Fixed(9.00f)/Fixed(3));
    std::cout << "Before predecrement: "<< c << std::endl;
    std::cout << "After predecrement: "<< --c;
    std::cout << ", actual value is " << c << std::endl;
    std::cout << "After postdecrement: " << c--;
    std::cout << ", actual value is " << c << std::endl;
    std::cout << Fixed::min( a, c ) << std::endl;
    
    return 0;
}