#include "Harl.hpp"

Harl::Harl() {
	func[0] = &Harl::debug;
    func[1] = &Harl::info;
    func[2] = &Harl::warning;
    func[3] = &Harl::error;
}

void Harl::debug() {
	std::cout << "Okey let's find out where this bug is." << std::endl;
}

void Harl::info() {
	std::cout << "They say the word bug came from an actual bug found inside a computer!!" << std::endl;
}

void Harl::warning() {
	std::cout << "This line here may cause bugs in the future." << std::endl;
}

void Harl::error() {
	std::cout << "The program can not compaile!" << std::endl;
}

void Harl::complain(std::string level) {
	
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == lvl[i])
			(*func[i])();
	}
}
