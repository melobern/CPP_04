/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:15:55 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/20 13:54:17 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void)
    :_name("Anonymous"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Animal::Animal(const std::string name, int health, int mana, int strength)
    :_name(name),
     _hitPoints(health), _energyPoints(mana), _attackDamage(strength) {
    std::cout << "Animal " << name;
    std::cout << " : constructor called" << std::endl;
    return;
}

Animal::Animal(const std::string name)
    :_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Animal " << name;
    std::cout << " : constructor called" << std::endl;
    return;
}

Animal::Animal(const Animal &claptrap) {
    std::cout << "Copy constructor called" << std::endl;
    *this = claptrap;
    return;
}

Animal::~Animal() {
    std::cout << "Animal " << this->_name;
    std::cout <<" : Destructor called" << std::endl;
    return;
}

std::string Animal::getName(void) const {
    return (this->_name);
}
int    Animal::getHitPoints(void) const {
    return (this->_hitPoints);
}

int    Animal::getEnergyPoints(void) const {
    return (this->_energyPoints);
}

int    Animal::getAttackDamage(void) const {
    return (this->_attackDamage);
}

Animal   &Animal::operator=(const Animal &animal) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &animal) {
        this->type = animal.type;
    }
    return (*this);
}
