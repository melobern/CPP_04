/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:54:20 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 09:05:00 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_MATERIASOURCE_HPP_
#define EX03_INCLUDES_MATERIASOURCE_HPP_
# include <string>

class MateriaSource {
 protected:
  std::string type;
 public:
  explicit MateriaSource(std::string const & type);
  explicit MateriaSource(const MateriaSource &materiasource);
  MateriaSource &operator=(const MateriaSource &materiasource);
  virtual ~MateriaSource();
  std::string const & getType() const;
  virtual MateriaSource* clone() const = 0;
  virtual void use(const ICharacter& target);
};

#endif  //  EX03_INCLUDES_MATERIASOURCE_HPP_
