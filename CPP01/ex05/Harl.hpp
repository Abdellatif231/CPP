#include <iostream>

class Harl {
	private:
		void debug();
		void info();
		void warning();
		void error();
	
	public:
		Harl();
		void (Harl::*func[4]) ();
		void complain(std::string level);
};		
