/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:59:06 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 13:33:46 by mbernard         ###   ########.fr       */
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

int main(void) {
    mainTests();
    return (0);
}
