// Seyidova Mahym (6 group,Lab 5-5A, 5 option 4-2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//  ///Код написан в Visual Studio 2019
///Передача строк в качестве параметров 
#include <iostream>
using namespace std;

void Func(char* str); ///протоцип функции

void main()
{
	const int SIZE = 50; ///Задаем размер 
	char str[SIZE];
	cout << "Enter a string: " << endl;
	cin.getline(str, SIZE);   ///ввод строки
	Func(str);

}
  ///Вывести слова, заканчивающихся на буквы 'rd'
void Func(char* str)
{
	char sep[] = { "! .,;:?()-" };  ///разделители
	char* Ptr;
	char* next = NULL;
	Ptr = strtok_s(str, sep, &next); 
	while (Ptr != NULL)
	{
		int len = strlen(Ptr);
		if (Ptr[len - 1] == 'd' && Ptr[len - 2] == 'r') cout << Ptr << endl;
		Ptr = strtok_s(NULL, sep, &next);
	}
}
