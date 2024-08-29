/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:54:20 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 10:51:27 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_CHARACTER_HPP_
#define EX03_INCLUDES_CHARACTER_HPP_
# include <string>

class Character : public ICharacter {
 public:
  Character(void);
  explicit Character(std::string const &name);
  explicit Character(const Character &character);
  Character &operator=(const Character &character);
  virtual ~Character();

  virtual std::string const &getName() const;
  virtual void equip(AMateria* m);
  virtual void unequip(int idx);
  virtual void use(int idx, ICharacter& target);
 private:
  std::string const _name;
  AMateria*         _inventory[4];
  AMateria*         _tmpInventory[4];
};

#endif  //  EX03_INCLUDES_CHARACTER_HPP_
