/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:24:03 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 14:58:50 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
    std::cout << "WrongCat\t: ";
    std::cout << "Default constructor called" << std::endl;
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
