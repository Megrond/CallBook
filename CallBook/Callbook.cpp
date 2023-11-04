#include "Callbook.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void Callbook::showBook()
{
	cout << endl << "Пользователь номер: " << id << endl;
	cout << "ФИО: " << fio << endl;
	cout << "Домашний телефон: " << home_fhone << endl;
	cout << "Рабочий телефон: " << work_fhone << endl;
	cout << "Мобильный телефон: " << user_phone << endl;
	cout << "Дополнительная информация: " << info << endl;
}