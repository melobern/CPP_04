/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:24:03 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 14:49:09 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    std::cout << "Dog\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

Dog::Dog(const Dog &dog) {
    std::cout << "Dog\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = dog;
    return;
}

Dog::~Dog() {
    std::cout << "Dog\t\t: ";
    std::cout << "Destructor called" << std::endl;
    return;
}

Dog   &Dog::operator=(const Dog &dog) {
    if (this != &dog) {
        this->type = dog.type;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void    Dog::makeSound() const {
    std::cout << "Ouaf Ouaf !" << std::endl;
}
