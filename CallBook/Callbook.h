#pragma once
#include <iostream>


class Callbook
{
	static unsigned int count_instance;
	unsigned int id;
	char* fio;
	int64_t home_fhone;
	int64_t work_fhone;
	int64_t user_phone;
	char* info;


public:
	Callbook(const char* fio, int64_t home_fhone, int64_t work_fhone, int64_t user_phone, const char* info) :
		id { count_instance },
		fio{ fio ? new char[strlen(fio) + 1] : nullptr },
		home_fhone{ home_fhone },
		work_fhone{ work_fhone },
		user_phone{ user_phone },
		info{ info ? new char[strlen(info) + 1] : nullptr } {

		if (fio)
		{
			strcpy_s(this->fio, strlen(fio) + 1, fio);
		}
		if (info)
		{
			strcpy_s(this->info, strlen(info) + 1, info);
		}
		count_instance++;
	} 

	char const* getFio()
	{
		return fio;
	}
	int getHomeFhone()
	{
		return home_fhone;
	}
	int getWorkFhone()
	{
		return work_fhone;
	}
	int getUserFhone()
	{
		return user_phone;
	}
	char const* getInfo()
	{
		return info;
	}
	void showBook();


	~Callbook()
	{
		delete[]fio;
		delete[] info;
		count_instance--;
	}
};

