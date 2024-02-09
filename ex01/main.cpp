#include <iostream>

#include "iter.hpp"

int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	std::string arr[] = {"Kieran", "Joseph", "Ella", "Lucas"};

	iter(tab, 5, &printVariable);
	iter(arr, 4, &printVariable);
	return 0;
}