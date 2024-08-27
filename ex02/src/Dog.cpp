/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:24:03 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 12:54:59 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Aanimal("Dog") {
    std::cout << "Dog\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    this->_brain = new Brain;
    return;
}

Dog::Dog(const Dog &dog) : Aanimal("Dog") {
    std::cout << "Dog\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = dog;
    this->_brain = new Brain;
    return;
}

Dog::~Dog() {
    std::cout << "Dog\t\t: ";
    std::cout << "Destructor called" << std::endl;
    delete this->_brain;
    return;
}

Dog   &Dog::operator=(const Dog &dog) {
    if (this != &dog) {
        this->type = dog.type;
        *(this->_brain) = *(dog._brain);
    }
    std::cout << "Dog\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void    Dog::makeSound() const {
    std::cout << "Ouaf Ouaf !" << std::endl;
}

void    Dog::showIdeas(void) const {
    int i = 0;
    while (i < 100 && !this->_brain->getIdea(i).empty()) {
        std::cout << i + 1 << " " << this->_brain->getIdea(i) << std::endl;
        i++;
    }
}

void    Dog::setIdea(std::string newIdea) const {
    this->_brain->setIdea(newIdea);
}

void    Dog::setIdea(std::string newIdea, unsigned int index) const {
    this->_brain->setIdea(newIdea, index);
}
