/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 14:16:59 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(void) {
    return;
}

AMateria::AMateria(std::string const &type) : _type(type) {
    return;
}

AMateria::AMateria(const AMateria &amateria) {
    *this = amateria;
}

AMateria& AMateria::operator=(const AMateria &amateria) {
    if (this != &amateria)
        this->_type = amateria._type;
    return (*this);
}

AMateria::~AMateria() {
    return;
}

std::string const& AMateria::getType() const {
    return (this->_type);
}

void AMateria::use(const ICharacter& target) {
    (void) target;
}

