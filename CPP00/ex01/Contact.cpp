#include "Contact.hpp"

std::string trim(std::string str) {
    while (!str.empty() && (str[0] == ' ' || str[0] == '\t' || str[0] == '\n'))
        str.erase(0, 1);

    while (!str.empty() && (str[str.length() - 1] == ' ' || str[str.length() - 1] == '\t' || str[str.length() - 1] == '\n'))
        str.erase(str.length() - 1, 1);

	if (str.empty())
		return "";
    return str;
}

void Contact::setContact() {

	std::string input;

	std::cin.ignore();

	do {
    	std::cout << "First name: ";
    	std::getline(std::cin, input);
		if (std::cin.eof())
			std::exit(0);
		input = trim(input);
	} while (input.empty());
	firstName = input;

	do {
    	std::cout << "Last name: ";
    	std::getline(std::cin, input);
		if (std::cin.eof())
        	std::exit(0);
		input = trim(input);
	} while (input.empty());
	lastName = input;

	do {
    	std::cout << "Nickname: ";
    	std::getline(std::cin, input);
		if (std::cin.eof())
        	std::exit(0);
		input = trim(input);
	} while (input.empty());
	nickName = input;

	do {
    	std::cout << "Phone number: ";
    	std::getline(std::cin, input);
		if (std::cin.eof())
        	std::exit(0);
		input = trim(input);
	} while (input.empty() || input.find_first_not_of("+0123456789") != std::string::npos);
	phoneNumber = input;

	do {
    	std::cout << "Darkest secret: ";
    	std::getline(std::cin, input);
		if (std::cin.eof())
        	std::exit(0);
		input = trim(input);
	} while (input.empty());
	darkestSecret = input;

}

void Contact::displaySummary(int index) const {
    std::cout << std::setw(10) << index << "|";
    std::cout << std::setw(10) << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << "|";
    std::cout << std::setw(10) << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << "|";
    std::cout << std::setw(10) << (nickName.length() > 10 ? nickName.substr(0, 9) + "." : nickName) << std::endl;
}

void Contact::displayDetails() const {
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickName << std::endl;
    std::cout << "Phone number: " << phoneNumber << std::endl;
    std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

