#include <iostream>
#include "motivation.h"
using namespace std;

void motivation(int sizeOfSymbol)
{
	if (sizeOfSymbol == 3)
	{
		cout << "Неплохое начало" << endl;
	}
	else if (sizeOfSymbol == 6)
	{
		cout << "Хорошо идёшь" << endl;
	}
	else if (sizeOfSymbol == 9)
	{
		cout << "Ты все ближе к победе" << endl;
	}
	else if (sizeOfSymbol == 12)
	{
		cout << "Да, длинноватое слово загадали" << endl;
	}
	else if (sizeOfSymbol == 15)
	{
		cout << "СЛИШКОМ МНОГО БУКВ!!!" << endl;
	}

}
