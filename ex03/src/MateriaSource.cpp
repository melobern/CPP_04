/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:42:41 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 13:10:51 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

#define RED "\033[31m"
#define RESET "\033[0m"

MateriaSource::MateriaSource(void) {
    std::cout << "MateriaSource\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materias[i] = 0;
    return;
}

MateriaSource::MateriaSource(const MateriaSource &materiasource) {
    std::cout << "MateriaSource\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = materiasource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &materiasource) {
    std::cout << "MateriaSource\t\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &materiasource) {
        for (int i = 0; i < 4; i++) {
            delete this->_materias[i];
            this->_materias[i] = 0;
            if (materiasource._materias[i] != 0)
                this->_materias[i] = materiasource._materias[i]->clone();
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource\t\t: ";
    std::cout << "Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete this->_materias[i];
}

void      MateriaSource::learnMateria(AMateria* materia) {
    int idx = 0;

    while (idx < 4 && this->_materias[idx] != 0)
        idx++;
    if (idx > 3) {
        std::cout << RED << "Error : can't learn more materias.";
        std::cout << RESET << std::endl;
        return;
    }
    this->_materias[idx] = materia;
}

AMateria* MateriaSource::createMateria(std::string const &type) {
    int idx = 0;

    while (idx < 4 && this->_materias[idx] != 0) {
        if (this->_materias[idx]->getType() == type)
            return (this->_materias[idx]->clone());
        idx++;
    }
    std::cout << RED << "Error : " << type << " materia unknown.";
    std::cout << RESET << std::endl;
    return (0);
}
