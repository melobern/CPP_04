/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:15:55 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 13:45:42 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Aanimal.hpp"

Aanimal::Aanimal(void) : type("Unknown") {
    std::cout << "Aanimal\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

Aanimal::Aanimal(const std::string type): type(type) {
    std::cout << "Aanimal\t\t: ";
    std::cout << "Constructor called" << std::endl;
    return;
}

Aanimal::Aanimal(const Aanimal &animal) {
    std::cout << "Aanimal\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = animal;
    return;
}

Aanimal::~Aanimal(void) {
    std::cout << "Aanimal\t\t: " << this->type;
    std::cout << " Destructor called" << std::endl;
    return;
}

Aanimal   &Aanimal::operator=(const Aanimal &animal) {
    if (this != &animal)
        this->type = animal.type;
    std::cout << "Aanimal\t\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

std::string   const& Aanimal::getType(void) const {
    return (this->type);
}

