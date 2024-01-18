#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap{

	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap & src);
		DiamondTrap &	operator=(DiamondTrap const & rhs);
		~DiamondTrap(void);
		void	whoAmI();
		using FragTrap::attack;
	private:
		std::string	_name;
};

#endif
