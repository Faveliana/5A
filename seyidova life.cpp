// seyidova life.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter string:\n";
	const int SIZE = 50;
	char str[SIZE];
	cin.getline(str, SIZE);
	char sep[]{ "! .,;:?()-" };
	char rd[]{ "rd" };
	char str2[SIZE], temp[SIZE];
	int count, t = 0, s = 0;
	str[strlen(str)] = ' ';
	for (int i = 0; i < strlen(str); i++)
	{
		count = 0;
		for (int j = 0; j < strlen(sep); j++)
		{
			if (str[i] == sep[j])
			{
				count++;
			}
		}
		if (count == 0)
		{
			temp[t] = str[i];
            t++;
        }
         else
         {
           if (strlen(temp) != 1)
         {
	temp[t] = '\0';
	t = 0;
	if (temp[strlen(temp) - 2] == rd[0] && temp[strlen(temp) - 1] == rd[1])
	{
		for (int j = 0; j < strlen(temp); j++)
		{
			str2[s] = temp[j];
			s++;
		}
		str2[s] = '\n';
		s++;
	}
}
}
}
    str2[s] = '\0';
    cout << "\n Words with 'rd':\n";
    for (int i = 0; i < strlen(str2); i++)
    {
	cout << str2[i];
    }
     cout << endl;
}
