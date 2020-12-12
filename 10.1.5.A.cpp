// 10.1.5.A.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Для каждого класса описать поля, характеризующие объект, и методы, позволяющие заполнять и получать значения каждого из полей. 
//выводить значения полей на экран, а также необходимые конструкторы.Конструкторы и методы должны проверять параметры на допустимость.
//Определить и описать иерархию классов

#include <iostream>
#include "Class.h"
using namespace std;

void main()
{
	Point p(2, 3);
	Point p2(2, 6);
	Point p3(8, 3);
	Point p4(8, 6);
	p2.Print();
	cout <<endl;
	
	Line l(p, p3);
	Line l2(p3, p4);
	l.Print();
	cout << endl;
	cout << "Class Rectangle:\n";
	Rectangle r(l, l2);
	r.Print();
	cout << endl;

	Geom_figure g("rectangle", r);
	g.Print();
}




















