/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:16:27 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/26 11:59:40 by mbernard         ###   ########.fr       */
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
    doggie->setIdea("WOUF");
    doggie->showIdeas();
    kitty->setIdea("MEOW");
    kitty->showIdeas();
    kitten->setIdea("KITTENING");
    kitten->showIdeas();
    kitty->showIdeas();
    std::cout << std::endl << "BEGINNING OF DESTRUCTORS" << std::endl;
    delete doggie;
    delete kitty;
    delete meta;
    delete wrongKitty;
    delete wrongMeta;
    return (0);
}
