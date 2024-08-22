/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:16:27 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/22 14:59:09 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"


int main(void) {
    const Animal* meta = new Animal();
    const Animal* doggie = new Dog();
    const Animal* kitty = new Cat();
    const Animal* kitten = kitty;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongKitty = new WrongCat();

    std::cout << "END OF CONSTRUCTORS" << std::endl << std::endl;
    std::cout << "OK GUYS, TELL ME WHO YOU ARE ?" << std::endl;
    std::cout << "Doggie\t\t:\t" << doggie->getType() << " " << std::endl;
    std::cout << "Kitty\t\t:\t" << kitty->getType() << " " << std::endl;
    std::cout << "Kitten\t\t:\t" << kitten->getType() << " " << std::endl;
    std::cout << "WrongKitty\t:\t" << wrongKitty->getType() << " " << std::endl;
    std::cout << "Meta\t\t:\t" << meta->getType() << " " << std::endl;
    std::cout << "WrongMeta\t:\t" << wrongMeta->getType() << " " << std::endl;

    std::cout << std::endl << "FINE, WHO'S A GOOD PUPPY ?" << std::endl;
    std::cout << "Doggie\t\t:\t";
    doggie->makeSound();
    std::cout << "Kitty\t\t:\t";
    kitty->makeSound();
    std::cout << "Kitten\t\t:\t";
    kitten->makeSound();
    std::cout << "Meta\t\t:\t";
    meta->makeSound();
    std::cout << "WrongKitty\t:\t";
    wrongKitty->makeSound();
    std::cout << "WrongMeta\t:\t";
    wrongMeta->makeSound();

    std::cout << std::endl << "BEGINNING OF DESTRUCTORS" << std::endl;
    delete doggie;
    delete kitty;
    delete meta;
    delete wrongKitty;
    delete wrongMeta;
    return (0);
}
