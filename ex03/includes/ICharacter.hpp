/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:54:20 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/27 15:33:00 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_ICHARACTER_HPP_
#define EX03_INCLUDES_ICHARACTER_HPP_
# include <string>

class ICharacter {
 public:
  virtual ~ICharacter() {}
  virtual std::string const & getName() const = 0;
  virtual void equip(AMateria* m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, const ICharacter& target) = 0;
};

#endif  //  EX03_INCLUDES_ICHARACTER_HPP_
