/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 15:02:42 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    std::cout << "AMateria\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}


AMateria::AMateria(const AMateria &amateria) {
    std::cout << "AMateria\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
}


AMateria::AMateria &operator=(const AMateria &amateria) {
    std::cout << "AMateria\t\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
}


AMateria::~AMateria() {
    std::cout << "AMateria\t\t: ";
    std::cout << "Destructor called" << std::endl;
}


std::string const& AMateria::getType() const {
    return (this->type);
}

void AMateria::use(const ICharacter& target) {
    std::cout << "* shoots an ice bolt at "<< target->getName() << " *" << std::endl;
    std::cout << "* heals " << target->getName << "’s wounds *" << std::endl;
}

