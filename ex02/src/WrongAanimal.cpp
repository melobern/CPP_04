/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAanimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:15:55 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 13:55:42 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAanimal.hpp"

WrongAanimal::WrongAanimal(void): type("Unknown") {
    std::cout << "WrongAanimal\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

WrongAanimal::WrongAanimal(const std::string type): type(type) {
    std::cout << "WrongAanimal\t: ";
    std::cout << "Constructor called" << std::endl;
    return;
}

WrongAanimal::WrongAanimal(const WrongAanimal &animal) {
    std::cout << "WrongAanimal\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = animal;
    return;
}

WrongAanimal::~WrongAanimal() {
    std::cout << "WrongAanimal\t: " << this->type;
    std::cout << " Destructor called" << std::endl;
    return;
}

WrongAanimal   &WrongAanimal::operator=(const WrongAanimal &animal) {
    std::cout << "WrongAanimal\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &animal) {
        this->type = animal.type;
    }
    return (*this);
}

std::string    WrongAanimal::getType() const {
    return (this->type);
}

