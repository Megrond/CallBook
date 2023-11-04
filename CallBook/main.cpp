#include <iostream>
#include <Windows.h>
#include "Callbook.h"

using namespace std;

unsigned int Callbook::count_instance{ 1 };

int main()
{
	setlocale(LC_ALL, "RU");

	Callbook user_one("Romashov V.V.", 84843925555, 84952396548, 89190390232, "Just a good guy!");
	Callbook user_two("Odegov A.N.", 84843969425, 84955623487, 89602223355, "Wonderful person!");

	user_one.showBook();
	user_two.showBook();

	return 0;
};