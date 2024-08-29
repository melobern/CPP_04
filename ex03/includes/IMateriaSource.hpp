/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:54:20 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 13:06:01 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_IMATERIASOURCE_HPP_
#define EX03_INCLUDES_IMATERIASOURCE_HPP_
# include <iostream>
# include <string>
# include "AMateria.hpp"

class IMateriaSource {
 public:
  virtual ~IMateriaSource() {}
  virtual void      learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif  //  EX03_INCLUDES_IMATERIASOURCE_HPP_
