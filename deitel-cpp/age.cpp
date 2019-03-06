#include <iostream>


int main()
{
	std::cout << "Enter your age: ";
	int myAge;
	std::cin >> myAge;

	std::cout << "Enter your friend's age: ";
	int friendsAge;
	std::cin >> friendsAge;

	if (myAge > friendsAge)
		std::cout << "You are older.\n";
	else 
		if (myAge < friendsAge)
		std::cout << "You are younger.\n";
			else 
				std::cout << "You and your friend are the same age.\n";
	return 0;
}

