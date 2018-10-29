#pragma once
#include <iostream>
#include "lib.h"

int helloworld()
{
	std::cout << "build " << lib::version() << std::endl;
	std::cout << "Hello, World!";
}