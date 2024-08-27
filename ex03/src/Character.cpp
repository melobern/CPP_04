/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 15:46:58 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(std::string const & type) {
    std::cout << "Character\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

Character::Character(const Character &character) {
    std::cout << "Character\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
}

Character::Character &operator=(const Character &character) {
    std::cout << "Character\t\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
}

Character::~Character() {
    std::cout << "Character\t\t: ";
    std::cout << "Destructor called" << std::endl;
}

std::string const& Character::getType() const {
    return (this->type);
}

std::string const& Character::getName() {
    return (this->_name);
}

void Character::equip(AMateria* m) {
}

void Character::unequip(int idx) {
}

void Character::use(int idx, const ICharacter& target) {
    // A CHANGER EVIDEMMENT ! VERIF SI EQUIPEMENT A L INDEX DONNE
    if (idx) {
        std::cout << "* shoots an ice bolt at "<< target->getName();
        std::cout << " *" << std::endl;
    } else if (idx) {
        std::cout << "* heals " << target->getName;
        std::cout << "’s wounds *" << std::endl;
    }
}

