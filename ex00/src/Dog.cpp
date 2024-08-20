/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:24:03 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/20 14:00:04 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void): {
    std::cout << "Dog :";
    std::cout << "Default constructor called" << std::endl;
    return;
}

Dog::Dog(const Dog &dog) {
    std::cout << "Dog : ";
    std::cout << "Copy constructor called" << std::endl;
    *this = dog;
    return;
}

Dog::~Dog() {
    std::cout << "Dog : ";
    std::cout <<"Destructor called" << std::endl;
    return;
}

Dog   &Dog::operator=(const Dog &dog) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &dog) {
        this->type = dog.type;
    }
    return (*this);
}

