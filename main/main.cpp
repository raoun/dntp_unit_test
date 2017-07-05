#include <iostream>
#include "Literature.h"

template <class T>
static void printCollection(const std::vector< T > &collection)
{
	std::cout << std::endl << "Collection =" << std::endl;
	for each (const T &var in collection)
	{
		std::cout << var << std::endl;
	}
}

int main(int argc, void **argv)
{
	std::vector <int> v1 {1, 2, 3, 6, 2, 7, 3, 2, 6, 1, 2, 6};
	dntp::myLib::changeNumValue(v1, 2, 15);
	printCollection(v1);
	
	std::vector <std::string> v2 {"Jad", "Abbas", "Rita", "Zahra", "Marianne", "Joseph", "Kamal", "Christian", "Ahmad", "Ramy", "Georges"};

	dntp::myLib::changeStringValue(v2, "Marianne", "Mariane");
	printCollection(v2);
	
	std::cin.get();
	return 0;
}

