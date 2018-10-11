#include <conio.h>
#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Hello World!\n";

	cout << "build " << lib::version;

	_getch();
	return 0;
}