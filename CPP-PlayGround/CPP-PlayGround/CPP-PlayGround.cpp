#include <iostream>
#include "windows.h"
#include <vector>

int X = 11;
int Y = 12;
int __MATH__ = X + Y; // 23


int title()
{
	SetConsoleTitleA("CPP Playground");
	return 1;
}

//MATHS
int main()
{
	title();
	if (__MATH__ == 23)
	{
		std::cout << "Math: " << __MATH__;
		std::cout << "\n";
		system("pause");
		return 1;
	}
	else
	{
		return 0;
	}
}
