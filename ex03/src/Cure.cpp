/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 13:27:56 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
    return;
}

Cure::Cure(const Cure &cure) : AMateria(cure) {
    *this = cure;
}

Cure& Cure::operator=(const Cure &cure) {
    if (this != &cure)
        this->_type = cure._type;
    return (*this);
}

Cure::~Cure(void) {
    return;
}

void Cure::use(const ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *";
    std::cout << std::endl;
}

AMateria* Cure::clone(void) const {
    return (new Cure(*this));
}
