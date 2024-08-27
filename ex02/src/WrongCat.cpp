/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:24:03 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/26 10:21:59 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAanimal("WrongCat") {
    std::cout << "WrongCat\t: ";
    std::cout << "Default constructor called" << std::endl;
    this->_brain = new Brain;
    return;
}

WrongCat::WrongCat(const WrongCat &cat) {
    std::cout << "WrongCat\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = cat;
    return;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat\t: ";
    std::cout <<"Destructor called" << std::endl;
    delete this->_brain;
    return;
}

WrongCat   &WrongCat::operator=(const WrongCat &wrongcat) {
    if (this != &wrongcat) {
        this->type = wrongcat.type;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void    WrongCat::makeSound() const {
    std::cout << "Wrong Meowwwwwwwwwwwww !" << std::endl;
}

void   WrongCat::showIdeas(void) const {
    int i = 0;
    std::string *ideas = this->_brain->getIdeas();
    while (!ideas[i].empty()) {
        std::cout << ideas[i] << std::endl;
    }
}

void   WrongCat::setIdea(std::string newIdea) const {
    this->_brain->setIdea(newIdea);
}

void   WrongCat::setIdea(std::string newIdea, unsigned int index) const {
    this->_brain->setIdea(newIdea, index);
}
