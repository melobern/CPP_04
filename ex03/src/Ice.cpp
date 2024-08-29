/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 13:04:51 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
    std::cout << "Ice\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

Ice::Ice(const Ice &ice) : AMateria(ice) {
    std::cout << "Ice\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = ice;
}

Ice& Ice::operator=(const Ice &ice) {
    std::cout << "Ice\t\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &ice)
        this->_type = ice._type;
    return (*this);
}

Ice::~Ice(void) {
    std::cout << "Ice\t\t: ";
    std::cout << "Destructor called" << std::endl;
}


void Ice::use(const ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *";
    std::cout << std::endl;
}

AMateria* Ice::clone(void) const {
    return (new Ice(*this));
}
