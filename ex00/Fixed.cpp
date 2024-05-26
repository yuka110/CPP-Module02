/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/23 14:25:08 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/26 13:42:04 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _x(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& F)
{
    std::cout << "Copy constructor called" << std::endl;
    operator=(F);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(Fixed& F)
{
    if (this == &F)
        return ;
    std::cout << "Copy assignment operator called" << std::endl;
    _x = F.getRawBits();
}

int   Fixed::getRawBits(void) const
{
    std::cout << "getRawbits member function called" << std::endl;
    return(_x);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawbits member function called" << std::endl;
    _x = raw;
}