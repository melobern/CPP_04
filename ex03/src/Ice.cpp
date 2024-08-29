/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 09:39:52 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void) {
    std::cout << "Ice\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

Ice::Ice(const Ice &ice) : Amateria("ice") {
    std::cout << "Ice\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    this = *ice;
    return (this);
}

Ice::Ice &operator=(const Ice &ice) : Amateria(ice) {
    std::cout << "Ice\t\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
}

Ice::~Ice(void) {
    std::cout << "Ice\t\t: ";
    std::cout << "Destructor called" << std::endl;
}


void Ice::use(const ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target->getName() << " *";
    std::cout << std::endl;
}

Amateria* Ice::clone(void) const {
    return (new Ice(*this));
}
