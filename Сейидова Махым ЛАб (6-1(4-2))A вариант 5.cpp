// Сейидова Махым ЛАб (6-1(4-2))A вариант 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Лабораторная работа 6-1 5А вариант.Код написан на Visual studio 2019 
//Выполнить задания 4.2 используя класс string для представ - ления данных.Задания выполнить через функции.
#include <iostream>
#include <string>
using namespace std;
//Вывести слова, заканчивающихся на буквы 'rd'.
void main()
{
	cout << "Enter string:\n";
	string str;
	getline(cin, str);
	string sep("! .,;:?()-"), //разделители
		rd("rd"),
		str2, temp;
	str += ' ';
	for (int i = 0; i < str.size(); i++)
	{
		int count = 0;
		for (int j = 0; j < sep.size(); j++)
			if (str[i] == sep[j])
				count++;
		if (count == 0)
			temp += str[i];
		else
			if (temp.size() > 0)
			{
				if (temp[temp.size() - 2] == rd[0] && temp[temp.size() - 1] == rd[1])
				{
					for (int j = 0; j < temp.size(); j++)
						str2 += temp[j];
					str2 += ' ';
				}
				temp = "";
			}
	}
	cout << "\nWords with 'rd':\n" << str2 << endl;
}