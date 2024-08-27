/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:16:27 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 13:41:41 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#define PURPLE "\033[1;35m"
#define YELLOW "\033[1;93m"
#define RESET "\033[0m"

static void mainTests(void) {
    const Aanimal* j = new Dog();
    const Aanimal* i = new Cat();

    delete j;
    delete i;
}

static void nurserytests(void) {
    const Aanimal *petNursery[100];
    int i = 0;

    while (i < 50) {
        petNursery[i] = new Cat();
        i++;
    }
    while (i < 100) {
        petNursery[i] = new Dog();
        i++;
    }
    for (int i = 0; i < 100; i++)
        petNursery[0]->setIdea("A MARVELOUS IDEA !");
    petNursery[0]->showIdeas();
    std::cout << std::endl << "CHANGES ARE COMING !" << std::endl;
    petNursery[0]->setIdea("hidden idea at index 50, nevermind...", 50);
    petNursery[0]->setIdea("A DESTOYING IDEA !");
    petNursery[0]->setIdea("ANOTHER IDEA !");
    petNursery[0]->showIdeas();
    i = 0;
    while (i < 100) {
        delete petNursery[i];
        i++;
    }
}

static void printName(std::string name, void* animal) {
    std::cout << std::endl << PURPLE << name << RESET;
    std::cout << " : "  << animal;
    std::cout << std::endl;
}

static void brainTests(void) {
    Dog doggie;
    Dog allie;
    Cat kitty;
    Cat kitten;


    std::cout << "END OF CONSTRUCTORS" << std::endl << std::endl;

    printName("DOGGIE", static_cast<void *>(&doggie));
    doggie.setIdea("WOUF");
    doggie.showIdeas();
    allie = doggie;
    printName("ALLIE", static_cast<void *>(&allie));
    allie.setIdea("ALLWOUAF");
    allie.showIdeas();
    printName("KITTY", static_cast<void *>(&kitty));
    kitty.setIdea("MEOW");
    kitty.showIdeas();
    kitten = kitty;
    printName("KITTEN", static_cast<void *>(&kitten));
    kitten.setIdea("KITTENING");
    kitten.showIdeas();
    printName("KITTY", static_cast<void *>(&kitty));
    kitty.showIdeas();
    std::cout << std::endl << "BEGINNING OF DESTRUCTORS" << std::endl;
}

int main(void) {
    std::cout << YELLOW << "MAIN TESTS" << RESET << std::endl;
    mainTests();
    std::cout << std::endl << YELLOW << "NURSERY TESTS" << RESET << std::endl;
    nurserytests();
    std::cout << std::endl << YELLOW << "BRAIN TESTS" <<  RESET << std::endl;
    brainTests();
    return (0);
}
