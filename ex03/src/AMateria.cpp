/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 15:39:51 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(void) {
    std::cout << "AMateria\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

AMateria::AMateria(std::string const &type) : type(_type) {
    std::cout << "AMateria\t\t: ";
    std::cout << "Constructor called" << std::endl;
    return;
}

AMateria::AMateria(const AMateria &amateria) {
    std::cout << "AMateria\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    this = *amateria;
}

AMateria& AMateria::operator=(const AMateria &amateria) {
    std::cout << "AMateria\t\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &amateria)
        this->_type = amateria._type;
    return (*this);
}

AMateria::~AMateria() {
    std::cout << "AMateria\t\t: ";
    std::cout << "Destructor called" << std::endl;
}

std::string const& AMateria::getType() const {
    return (this->_type);
}

void AMateria::use(const ICharacter& target) {
    (void) target;
}

