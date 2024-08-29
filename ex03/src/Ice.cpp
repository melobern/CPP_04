/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 13:27:47 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
    return;
}

Ice::Ice(const Ice &ice) : AMateria(ice) {
    *this = ice;
}

Ice& Ice::operator=(const Ice &ice) {
    if (this != &ice)
        this->_type = ice._type;
    return (*this);
}

Ice::~Ice(void) {
    return;
}


void Ice::use(const ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *";
    std::cout << std::endl;
}

AMateria* Ice::clone(void) const {
    return (new Ice(*this));
}
