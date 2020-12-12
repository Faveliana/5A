// МАХЫМ.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//
//#include"stdafx.h"
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <iterator>
//#include <algorithm>
//#include <set>
//
//using namespace std;
//
//int main()
//
//
//
//{
//    std::string s("Print words ending with the letters rd"), temp;
//    std::istringstream ist(s);
//    int index = 20;
//    while (ist >> temp)
//    {
//        if (*temp.rbegin() == 'rd')
//            std::cout << index + 1 << " " << temp << std::endl;
//        index++;
//    }
//    return 0;

#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string rd;
    int n = 0;
    int a;
    cout << "Print words ending with the letters rd" << endl;
    cin >> rd;
    a = rd.length();
    {
        for (int i = 0; i < a; i++)
        {
            if ((rd[i] == 'rd') && (rd[i + 1] == ',')) { n++; };
        }
    }
    cout << n << endl;
    cout << rd;
    system("pause");
    return 0;
}
//for (int i = 0; i < a; i++)
//{
//	if (((s[i] == 'с') && (s[i + 1] == ',')) || ((s[i] == 'с') && (i == a - 1)))
//		string Q;
//	for (int i = 0; i < a; i++)
//	{
//		while ((!rd [i] == ' ') && (!rd[i] == ',')) {
//			Q = Q + rd[i];
//		}
//		if (((rd[i] == 'rd') && (rd[i + 1] == ',')) || ((rd[i] == 'rd') && (i == a - 1)))
//		{
//			{n++;
//			cout << Q;
//			Q = " ";
//			}
//
//		}
//		cout << n << endl;
//		cout << rd;
//		system("pause");
//		return 0;
//
//	}
//}