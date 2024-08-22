/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:15:55 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 11:25:44 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("unknown") {
    std::cout << "Default constructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const std::string type): type(type) {
    std::cout << "WrongAnimal " << type;
    std::cout << " : constructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
    std::cout << "Copy constructor called" << std::endl;
    *this = animal;
    return;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal " << this->type;
    std::cout <<" : Destructor called" << std::endl;
    return;
}

WrongAnimal   &WrongAnimal::operator=(const WrongAnimal &animal) {
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
    std::cout << "awwouuuwarrwrrr : Strange unidentified noise.";
    std::cout << "This sound seems so wrong." << std::endl;
}
