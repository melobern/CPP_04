/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 09:04:25 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    std::cout << "MateriaSource\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

MateriaSource::MateriaSource(std::string const &type) : type(_type) {
    std::cout << "MateriaSource\t\t: ";
    std::cout << "Constructor called" << std::endl;
    return;
}

MateriaSource::MateriaSource(const MateriaSource &materiasource) {
    std::cout << "MateriaSource\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    this = *materiasource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &materiasource) {
    std::cout << "MateriaSource\t\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &materiasource)
        this->_type = materiasource._type;
    return (*this);
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource\t\t: ";
    std::cout << "Destructor called" << std::endl;
}

std::string const& MateriaSource::getType() const {
    return (this->_type);
}

void MateriaSource::use(const ICharacter& target) {
    (void) target;
}

