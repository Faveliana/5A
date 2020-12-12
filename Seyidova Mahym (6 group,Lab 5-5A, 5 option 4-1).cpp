// Seyidova Mahym (6 group,Lab 5-5A, 5 option 4-1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// //Код был написан в Visual Studio 2019 

#include <iostream>
using namespace std;
///все данные функции передаем в качестве параметров
void Create_str2_with_z(char* str1, char* str2);
void Create_str2_with_consonant_letters(char* str1, char* str2);
void Sort_letters_in_str2(char* str2);

void main()
{
	const int N = 50; 
	char str1[N], str2[N];
	cout << "Enter your string:\n";
	cin.getline(str1, N); // ввод  строки
	Create_str2_with_z(str1, str2);
	Create_str2_with_consonant_letters(str1, str2);
	Sort_letters_in_str2(str2);
}
  ///после каждой буквы 'z' добавляет символ '!'
void Create_str2_with_z(char* str1, char* str2)
{
	int i = 0,
		j = 0;

	while (i < strlen(str1))
	{
		if (str1[i] == 'z' || str1[i] == 'Z') {
			str2[j] = str1[i];
			j++;
			str2[j] = '!';
			j++;
		}
		else str2[j++] = str1[i];
		i++;
	}
	str2[j] = '\0';
	cout << "\nResult:\n" << str2 << endl;

}
   ///Выводит в алфавитном порядке все согласные латинские буквы, входящие в строку
void Create_str2_with_consonant_letters(char* str1, char* str2)
{
	int i = 0,
		j = 0;

	while (i < strlen(str1))
	{
		if (isalpha(str1[i]))
		{
			if (!(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'u' || str1[i] == 'o' || str1[i] == 'y'))
			{
				str2[j] = str1[i];
				j++;
			}
			i++;
		}
		else
			i++;
	}
	str2[j] = '\0';
}

void Sort_letters_in_str2(char* str2)
{
	int i = 0,
		j = 0;
	char temp;
	while (i < strlen(str2))
	{
		j = i + 1;
		while (str2[j] != '\0')
		{
			if (str2[i] > str2[j])
			{
				temp = str2[i];
				str2[i] = str2[j];
				str2[j] = temp;
			}
			j++;
		}
		j = 0;
		i++;
	}

	cout << "\nSoglasnyye bukvy pervoy stroki po alfavitu:\n";
	i = 0;
	while (i < strlen(str2))
	{
		cout << str2[i];
		i++;
	}
	cout << endl;
}