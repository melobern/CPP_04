/* Copyright 2024 <mbernard>************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:54:20 by mbernard          #+#    #+#             */
/*   Updated: 2024/08/29 08:32:31 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_INCLUDES_IMateria_HPP_
#define EX03_INCLUDES_IMateria_HPP_
# include <string>

class IMateria {
 protected:
  std::string type;
 public:
  explicit IMateria(std::string const & type);
  explicit IMateria(const IMateria &IMateria);
  IMateria &operator=(const IMateria &IMateria);
  virtual ~IMateria();
  std::string const & getType() const;
  virtual IMateria* clone() const = 0;
  virtual void use(const ICharacter& target);
};

#endif  //  EX03_INCLUDES_IMateria_HPP_
