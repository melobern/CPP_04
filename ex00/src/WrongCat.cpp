/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:24:03 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 11:32:15 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) {
    std::cout << "WrongCat :";
    std::cout << "Default constructor called" << std::endl;
    return;
}

WrongCat::WrongCat(const WrongCat &cat) {
    std::cout << "WrongCat : ";
    std::cout << "Copy constructor called" << std::endl;
    *this = cat;
    return;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat : ";
    std::cout <<"Destructor called" << std::endl;
    return;
}

WrongCat   &WrongCat::operator=(const WrongCat &wrongcat) {
    this->WrongCat::~WrongCat();
    new (this) WrongCat(wrongcat);
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void    WrongCat::makeSound() const {
    std::cout << "Meowwwwwwwwwwwww !" << std::endl;
}
