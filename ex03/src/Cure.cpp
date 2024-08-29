/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 13:04:20 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
    std::cout << "Cure\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

Cure::Cure(const Cure &cure) : AMateria(cure) {
    std::cout << "Cure\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = cure;
}

Cure& Cure::operator=(const Cure &cure) {
    std::cout << "Cure\t\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &cure)
        this->_type = cure._type;
    return (*this);
}

Cure::~Cure(void) {
    std::cout << "Cure\t\t: ";
    std::cout << "Destructor called" << std::endl;
}

void Cure::use(const ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *";
    std::cout << std::endl;
}

AMateria* Cure::clone(void) const {
    return (new Cure(*this));
}
