#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string o_name);
		~Zombie();
		void annouce(void);
};
