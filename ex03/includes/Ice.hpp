/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:54:20 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 14:45:56 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_AMATERIA_HPP_
#define EX03_INCLUDES_AMATERIA_HPP_
# include <string>

class AMateria {
 protected:
  std::string type;
 public:
  explicit AMateria(std::string const & type);
  explicit AMateria(const AMateria &amateria);
  AMateria &operator=(const AMateria &amateria);
  virtual ~AMateria();
  std::string const & getType() const;
  virtual AMateria* clone() const = 0;
  virtual void use(const ICharacter& target);
};

#endif  //  EX03_INCLUDES_AMATERIA_HPP_