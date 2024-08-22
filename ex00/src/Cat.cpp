/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:24:03 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 14:48:54 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << "Cat\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

Cat::Cat(const Cat &cat) {
    std::cout << "Cat\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = cat;
    return;
}

Cat::~Cat() {
    std::cout << "Cat\t\t: ";
    std::cout << "Destructor called" << std::endl;
    return;
}

Cat   &Cat::operator=(const Cat &cat) {
    if (this != &cat) {
        this->type = cat.type;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meowwwwwwwwwwwww !" << std::endl;
}
