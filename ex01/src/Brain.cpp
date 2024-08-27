/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 08:13:07 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 13:18:55 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain\t\t: ";
    std::cout << "Default constructor called" << std::endl;
    return;
}

Brain::Brain(const Brain &brain) {
    std::cout << "Brain\t\t: ";
    std::cout << "Copy constructor called" << std::endl;
    *this = brain;
    return;
}

Brain::~Brain(void) {
    std::cout << "Brain\t\t: ";
    std::cout << "Destructor called" << std::endl;
    return;
}

Brain   &Brain::operator=(const Brain &brain) {
    int i = 0;

    if (this != &brain) {
        while (i < 100) {
            this->_ideas[i] = brain._ideas[i];
            i++;
        }
    }
    std::cout << "Brain\t: ";
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

std::string*   Brain::getIdeas(void) {
    return (this->_ideas);
}

std::string Brain::getIdea(unsigned int index) const {
    std::string empty = "";

    if (index >= 100) {
        std::cerr << "Error : wrong index given." << std::endl;
        return (empty);
    }
    return (this->_ideas[index]);
}

void    Brain::setIdea(std::string idea) {
    int i = 0;
    while (i < 100 && !this->_ideas[i].empty())
        i++;
    if (i >= 100) {
        i = 0;
        while (i < 99) {
            this->_ideas[i] = this->_ideas[i + 1];
            i++;
        }
    }
    this->_ideas[i] = idea;
}

void    Brain::setIdea(std::string idea, unsigned int index) {
    if (index < 100)
        this->_ideas[index] = idea;
    else
        std::cerr << "Error : wrong index given" << std::endl;
}
