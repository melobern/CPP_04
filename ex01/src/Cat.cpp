/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:24:03 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 12:54:53 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << "Cat\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    this->_brain = new Brain();
    return;
}

Cat::Cat(const Cat &cat) : Animal("Cat") {
    std::cout << "Cat\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    this->_brain = new Brain();
    *this = cat;
    return;
}

Cat::~Cat() {
    std::cout << "Cat\t\t: ";
    std::cout << "Destructor called" << std::endl;
    delete this->_brain;
    return;
}

Cat   &Cat::operator=(const Cat &cat) {
    std::cout << "Cat\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &cat) {
        this->type = cat.type;
        *(this->_brain) = *(cat._brain);
    }
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meowwwwwwwwwwwww !" << std::endl;
}

void   Cat::showIdeas(void) const {
    int i = 0;
    while (i < 100 && !this->_brain->getIdea(i).empty()) {
        std::cout << i + 1 << " " << this->_brain->getIdea(i) << std::endl;
        i++;
    }
}

void   Cat::setIdea(std::string newIdea) const {
    this->_brain->setIdea(newIdea);
}

void   Cat::setIdea(std::string newIdea, unsigned int index) const {
    this->_brain->setIdea(newIdea, index);
}
