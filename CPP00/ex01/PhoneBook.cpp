#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0), contactCount(0) {}

void PhoneBook::addContact() {
    if (contactCount < 8) {
        ++contactCount;
    }
    contacts[currentIndex].setContact();
    currentIndex = (currentIndex + 1) % 8;
}

void PhoneBook::searchContact() const {
    if (contactCount == 0) {
        std::cout << "The phonebook is empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < contactCount; ++i) {
        contacts[i].displaySummary(i + 1);
    }

    std::cout << "Enter the index of the contact to display: ";
    int index;
    std::cin >> index;
	if (std::cin.eof())
		std::exit(0);;

    if (std::cin.fail() || index < 1 || index > contactCount) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    contacts[index - 1].displayDetails();
}
