#include "lib.h"

int helloworld()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "build " << PROJECT_VERSION_PATCH << "\n";
	std::cout << "Hello, World!";

	return 0;
}