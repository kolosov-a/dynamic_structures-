#include "stdafx.h"
#include <iostream>
#include <string>
#include <clocale>

using namespace std;
struct pc_conf
{
	int cpu_type;
	int ram_size;
	string vendor;

};

void sort(pc_conf *pc_conf_arr)
{
	for (int j = 0; j <3; j++)
	{
		for (int i = 0; i < 2 - j; i++)
		{
			if (pc_conf_arr[i].ram_size > pc_conf_arr[i + 1].ram_size)
			{
				int b = pc_conf_arr[i].ram_size; 
					pc_conf_arr[i].ram_size = pc_conf_arr[i + 1].ram_size;
					pc_conf_arr[i + 1].ram_size = b;
			}
		}// for i
	}// for j
			
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	pc_conf pc_conf_arr[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Введите тип процессора No: " << i + 1 << endl;
		cin >> pc_conf_arr[i].cpu_type;
		cout << "Введите размер памяти компьютера No: " << i + 1 << endl;
		cin >> pc_conf_arr[i].ram_size;
		cout << "Введите производителя корпуса компьютера No: " << i + 1 << endl;
		cin >> (pc_conf_arr[i].vendor);
	}
	sort(pc_conf_arr);
	for (int i = 0; i < 3; i++)
		cout << pc_conf_arr[i].ram_size;


	return 0;
}

