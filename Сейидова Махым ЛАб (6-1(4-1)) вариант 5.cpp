// Сейидова Махым ЛАб (6-1(4-1)) вариант 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Лабораторная работа 6-1А 5 вариант.Код написан на Visual Studio 2019 
//Выполнить задания 4.1 используя класс string для представления данных. Задания выполнить через функции.
#include <iostream>
#include <string>
using namespace std;
//Преобразовать строку: после каждой буквы 'z' добавить символ '!'
void main()
{
	const int N = 50;
	string str1, str2;

	cout << "Enter your string:\n";
	getline(cin, str1);

	int i = 0;
	while (i < str1.size())
	{
		if (str1[i] == 'z' || str1[i] == 'Z')
		{
			str2 += str1[i];
			str2 += '!';
		}
		else
			str2 += str1[i];
		i++;
	}
	cout << "\nResult:\n" << str2 << endl;
	//Вывести в алфавитном порядке все согласные латинские буквы, входящие в строку.
	str2 = "";
	i = 0;
	while (i < str1.size())
	{
		if (isalpha(str1[i]))
			if (!(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'u' || str1[i] == 'o' || str1[i] == 'y'))
				str2 += str1[i];
		i++;
	}

	i = 0;
	int j = 0;
	string temp;
	while (i < str2.size())
	{
		j = i + 1;
		while (j != str2.size())
		{
			if (str2[i] > str2[j])
			{
				temp[0] = str2[i];
				str2[i] = str2[j];
				str2[j] = temp[0];
			}
			j++;
		}
		j = 0;
		i++;
	}

	cout << "\nSoglasnyye bukvy pervoy stroki po alfavitu:\n" << str2 << endl;
}