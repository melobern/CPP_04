/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:15:55 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 13:18:07 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Animal::Animal(const std::string type): type(type){
    std::cout << "Animal " << type;
    std::cout << " : constructor called" << std::endl;
    return;
}

Animal::Animal(const Animal &animal) {
    std::cout << "Copy constructor called" << std::endl;
    *this = animal;
    return;
}

Animal::~Animal() {
    std::cout << "Animal " << this->type;
    std::cout <<" : Destructor called" << std::endl;
    return;
}

Animal   &Animal::operator=(const Animal &animal) {
    this->Animal::~Animal();
    new (this) Animal(animal);
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

std::string   const& Animal::getType() const {
    std::cout << std::endl << this->type << " Motherfucka !" << std::endl;
    return (this->type);
}

void    Animal::makeSound() const {
    std::cout << "awwouuuwarrwrrr : Strange unidentified noise." << std::endl;
}

