/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAanimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:15:55 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 13:46:29 by mbernard         ###   ########.fr       */
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

void    WrongAanimal::makeSound() const {
    std::cout << "awwouuuwarrwrrr : Strange unidentified noise. ";
    std::cout << "This sound seems so wrong." << std::endl;
}

void   WrongAanimal::showIdeas(void) const {
    std::cout << "I'm too wrong to have a brain : no ideas !" << std::endl;
}

void   WrongAanimal::setIdea(std::string newIdea) const {
    (void)newIdea;
    std::cout << "My creator made me wrong : can't stock ideas !" << std::endl;
}

void   WrongAanimal::setIdea(std::string newIdea, unsigned int index) const {
    (void)newIdea;
    (void)index;
    std::cout << "My creator made me wrong : can't stock ideas !" << std::endl;
}

