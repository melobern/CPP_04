/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:24:03 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 11:30:09 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat :";
    std::cout << "Default constructor called" << std::endl;
    return;
}

Cat::Cat(const Cat &cat) {
    std::cout << "Cat : ";
    std::cout << "Copy constructor called" << std::endl;
    *this = cat;
    return;
}

Cat::~Cat() {
    std::cout << "Cat : ";
    std::cout <<"Destructor called" << std::endl;
    return;
}

Cat   &Cat::operator=(const Cat &cat) {
    this->Cat::~Cat();
    new (this) Cat(cat);
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meowwwwwwwwwwwww !" << std::endl;
}
