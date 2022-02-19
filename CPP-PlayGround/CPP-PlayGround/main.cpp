#include "hooks.h"

int X = 11;
int Y = 12;

int __MATH__INT = X + Y; // 23



int title()
{
	SetConsoleTitleA("");
	return 1;
}

int captcha__ = { 0 };



//				SIMPLE MATH				\\
//				SIMPLE MATH				\\
//				SIMPLE MATH				\\



int main()
{
	title();
	if (__MATH__INT == 23)
	{
		std::cout << "Math: " << __MATH__INT;
		std::cout << "\n";
		bool escape_;
		std::string __TYPE;
		std::cout << "BOOL: "; std::cin >> __TYPE;

		if (__TYPE == "true")
		{
			
			escape_ = true;
			std::cout << escape_;
			system("cls");
			std::cout << "App stay running." << "\n\n";;
			system("pause");
			return 1;

		}
		else
		{
			
			escape_ = false;
			std::cout << escape_ << "\n\n";
			std::cout << "App turning off." << "\n\n";;
			system("pause");
			return 0;
		}

		return 1;
	}
	else
	{
		return 0;
	}
}
