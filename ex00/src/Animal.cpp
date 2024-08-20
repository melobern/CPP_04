/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:15:55 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/20 15:54:57 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void): type("unknown") {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Animal::Animal(const std::string type): {
    std::cout << "Animal " << type;
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

Animal   &Animal::operator=(const Animal &animal) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &animal) {
        this->type = animal.type;
    }
    return (*this);
}

std::string    Animal::getType() const {
    return (this->_type);
}

void    Animal::makeSound() {
    std::cout << "awwouuuwarrwrrr : Strange unidentified noise." << std::endl;
}

