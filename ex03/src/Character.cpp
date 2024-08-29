/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 13:15:06 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#define RED "\033[31m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"

Character::Character(void) : _name("Anonymous") {
    for (int i = 0; i < 4; i++) {
        this->_inventory[i] = 0;
        this->_tmpInventory[i] = 0;
    }
    return;
}

Character::Character(const std::string &name) : _name(name) {
    for (int i = 0; i < 4; i++) {
        this->_inventory[i] = 0;
        this->_tmpInventory[i] = 0;
    }
    return;
}

Character::Character(const Character &character) {
    *this = character;
}

Character& Character::operator=(const Character &character) {
    if (this != &character) {
        this->_name = character._name;
        for (int i = 0; i < 4; i++) {
            this->_inventory[i] = 0;
            this->_tmpInventory[i] = 0;
            delete this->_inventory[i];
            delete this->_tmpInventory[i];
            if (character._inventory[i])
                this->_inventory[i] = character._inventory[i]->clone();
            if (character._tmpInventory[i])
                this->_tmpInventory[i] = character._tmpInventory[i]->clone();
        }
    }
    return (*this);
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        delete this->_inventory[i];
        delete this->_tmpInventory[i];
    }
}

std::string const& Character::getName() const {
    return (this->_name);
}

void Character::equip(AMateria* m) {
    int idx = 0;
    std::string item = m->getType();

    while (idx < 4 && this->_inventory[idx] != 0)
        idx++;
    if (idx > 3) {
        std::cout << YELLOW;
        std::cout << "Can't pick " << item << " : inventory is full";
        std::cout << RESET << std::endl;
        return;
    }
    this->_inventory[idx] = m;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3 || this->_inventory[idx] == 0) {
        std::cout << RED << "Error : no item at index" << RESET << std::endl;
        return;
    }

    std::string item = this->_inventory[idx]->getType();
    int i = 0;

    while (i < 4 && this->_tmpInventory[i] != 0)
        i++;
    if (i > 3) {
        std::cout << YELLOW;
        std::cout << "Can't drop " << item << " : temp storage is full";
        std::cout << RESET;
        std::cout << RESET << std::endl;
    } else {
        this->_tmpInventory[i] = this->_inventory[idx];
        this->_inventory[idx] = 0;
    }
}

void Character::use(int idx, const ICharacter& target) {
    if (idx >= 0 && idx < 4 && this->_inventory[idx] != 0)
        this->_inventory[idx]->use(target);
}

