#include <conio.h>
#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "build " << lib::version << "\n";

	cout << "Hello World!";

	_getch();
	return 0;
}