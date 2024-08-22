/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:15:55 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 14:58:30 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void) : type("Unknown") {
    std::cout << "Animal\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

Animal::Animal(const std::string type): type(type) {
    std::cout << "Animal\t\t: ";
    std::cout << "Constructor called" << std::endl;
    return;
}

Animal::Animal(const Animal &animal) {
    std::cout << "Animal\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = animal;
    return;
}

Animal::~Animal(void) {
    std::cout << "Animal\t\t: " << this->type;
    std::cout << " Destructor called" << std::endl;
    return;
}

Animal   &Animal::operator=(const Animal &animal) {
    if (this != &animal)
        this->type = animal.type;
    std::cout << "Animal\t\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

std::string   const& Animal::getType(void) const {
    return (this->type);
}

void    Animal::makeSound() const {
    std::cout << "awwouuuwarrwrrr : Strange unidentified noise." << std::endl;
}

