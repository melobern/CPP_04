/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:54:20 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 13:07:59 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_MATERIASOURCE_HPP_
#define EX03_INCLUDES_MATERIASOURCE_HPP_
# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 public:
  MateriaSource(void);
  explicit MateriaSource(const MateriaSource &materiasource);
  MateriaSource &operator=(const MateriaSource &materiasource);
  virtual ~MateriaSource();
  virtual void      learnMateria(AMateria* materia);
  virtual AMateria* createMateria(std::string const &type);
 private:
  AMateria* _materias[4];
};

#endif  //  EX03_INCLUDES_MATERIASOURCE_HPP_
