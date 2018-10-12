#include "lib.h"

using namespace std;

int helloworld()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "build " << lib::version() << "\n";
	std::cout << "Hello, World!";

	return 0;
}