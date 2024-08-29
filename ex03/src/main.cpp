/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:59:06 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 15:24:44 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# include "../includes/ICharacter.hpp"
# include "../includes/Character.hpp"
# include "../includes/Ice.hpp"
# include "../includes/Cure.hpp"
# include "../includes/IMateriaSource.hpp"
# include "../includes/MateriaSource.hpp"
# include "../includes/AMateria.hpp"

#define CYAN "\033[36m"
#define YELLOWG "\033[93m"
#define RESET "\033[0m"

static void    mainTests(void) {
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
}

static void    StorageTest(void) {
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    AMateria* tmp1;
    AMateria* tmp2;
    AMateria* tmp3;
    AMateria* tmp4;
    AMateria* tmp5;
    AMateria* tmp6;

    tmp = src->createMateria("cure");
    std::cout << CYAN "(EQUIPPED HEALING STUFF AND CURED)" << RESET << std::endl;
    me->equip(tmp);
    me->use(0, *me);
    std::cout << CYAN "(UNEQUIP 2 TIMES THE SAME OBJECT AT INDEX 0)" << RESET << std::endl;
    me->unequip(0);
    me->unequip(0);
    std::cout << CYAN "(EQUIP : WRONG INDEX GIVEN)" << RESET << std::endl;
    me->unequip(99);
    me->unequip(-100);
    std::cout << CYAN "(EQUIP MORE THAN 4 TIMES)" << RESET << std::endl;
    tmp1 = src->createMateria("cure");
    me->equip(tmp1);
    tmp2 = src->createMateria("ice");
    me->equip(tmp2);
    tmp3 = src->createMateria("cure");
    me->equip(tmp3);
    tmp4 = src->createMateria("ice");
    me->equip(tmp4);
    tmp5 = src->createMateria("cure");
    me->equip(tmp5);
    delete tmp5;
    std::cout << CYAN "(EQUIP UNKNOWN OBJECT)" << RESET << std::endl;
    tmp6 = src->createMateria("ukulele");
    me->equip(tmp6);
    delete tmp6;

    ICharacter* jenny = new Character("jenny");

    me->use(0, *jenny);
    me->use(1, *jenny);
    me->use(2, *jenny);
    me->use(3, *jenny);
    me->use(4, *jenny);
    me->use(-140, *jenny);
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    std::cout << CYAN << "(UNEQUIP MORE THAN 4 TIMES)" << RESET << std::endl;
    me->unequip(3);
    std::cout << CYAN << "(UNEQUIP : WRONG INDEX GIVEN)" << RESET << std::endl;
    me->unequip(-100);
    me->unequip(999);

    me->use(0, *jenny);
    delete jenny;
    delete me;
    delete src;
}

static void    learningTests(void) {
    IMateriaSource *src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    AMateria *tmp = new Ice();
    src->learnMateria(tmp);
    delete (tmp);
    delete (src);
}

static void    deepCopyTest(void) {
    IMateriaSource* src = new MateriaSource();
    AMateria* tmp1;
    AMateria* tmp2;
    AMateria* tmp3;
    AMateria* tmp4;
    Character me("deepcopied");

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    tmp1 = src->createMateria("cure");
    me.equip(tmp1);
    tmp2 = src->createMateria("ice");
    me.equip(tmp2);
    tmp3 = src->createMateria("cure");
    me.equip(tmp3);
    tmp4 = src->createMateria("ice");
    me.equip(tmp4);

    std::cout << CYAN << "(DEEP COPY DONE)" << RESET << std::endl;
    Character  copy = me;
    std::cout << CYAN << "(ORIGINAL UNEQUIPS EVERYTHING)" << RESET << std::endl;
    me.unequip(0);
    me.unequip(1);
    me.unequip(2);
    me.unequip(3);
    std::cout << CYAN << "(COPY HEALS / ATTACKS ORIGINAL)" << RESET << std::endl;
    copy.use(0, me);
    copy.use(1, me);
    copy.use(2, me);
    copy.use(3, me);
    delete src;
}

int main(void) {
    std::cout << YELLOWG << "TESTS FROM THE SUBJECT" << RESET << std::endl;
    mainTests();

    std::cout << std::endl << YELLOWG << "STORAGE TESTS" << RESET << std::endl;
    StorageTest();

    std::cout << std::endl << YELLOWG << "LEARNING TESTS" << RESET << std::endl;
    learningTests();

    std::cout << std::endl << YELLOWG << "DEEP COPY TESTS" << RESET << std::endl;
    deepCopyTest();
    return (0);
}
