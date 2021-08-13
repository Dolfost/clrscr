#include <iostream>
#include "../../clrscr.hpp"

int main() {

	std::cout << "Before clrscr():\nB\ne\nf\no\nr\ne\n";

	short arg;
	std::cout << "Enter an clearmode <int[0; 2]>: ";
	std::cin >> arg;
	std::cin.get();
	arg = clrscr(arg);

	std::cout << "After clrscr():\nDWDAd\nfdefFFF\n";
	std::cout << "clrscr() returned " << arg << "\n";
	std::cout << "DONE (press enter)\n";
	std::cin.get();
	return 0;
}
