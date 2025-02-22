#include "replaceline.hpp"

int replaceLine(std::string filename, std::string s1, std::string s2)
{
	std::ifstream inFile(filename.c_str());
	if (!inFile) {
		std::cerr << "Error opening " << filename << std::endl;
		return 1;
	}

	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile) {
		std::cerr << "Error opening the replace file" << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(inFile, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		outFile << line << std::endl;
	}

	inFile.close();
	outFile.close();
	return 0;
}
