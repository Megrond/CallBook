#include "Callbook.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void Callbook::showBook()
{
	cout << endl << "������������ �����: " << id << endl;
	cout << "���: " << fio << endl;
	cout << "�������� �������: " << home_fhone << endl;
	cout << "������� �������: " << work_fhone << endl;
	cout << "��������� �������: " << user_phone << endl;
	cout << "�������������� ����������: " << info << endl;
}