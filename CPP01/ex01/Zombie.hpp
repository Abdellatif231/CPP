#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void set_name(std::string o_name);
		void annouce(void);
};
