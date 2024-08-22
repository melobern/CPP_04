/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:15:55 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 14:50:41 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("Unknown") {
    std::cout << "WrongAnimal\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const std::string type): type(type) {
    std::cout << "WrongAnimal\t: ";
    std::cout << "Constructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
    std::cout << "WrongAnimal\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = animal;
    return;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal\t: " << this->type;
    std::cout << " Destructor called" << std::endl;
    return;
}

WrongAnimal   &WrongAnimal::operator=(const WrongAnimal &animal) {
    std::cout << "WrongAnimal\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &animal) {
        this->type = animal.type;
    }
    return (*this);
}

std::string    WrongAnimal::getType() const {
    return (this->type);
}

void    WrongAnimal::makeSound() const {
    std::cout << "awwouuuwarrwrrr : Strange unidentified noise. ";
    std::cout << "This sound seems so wrong." << std::endl;
}

