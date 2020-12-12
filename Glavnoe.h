#pragma once
#include <iostream>
#include <ctime>
#include <cmath>

class vector
{
private:
	//поле класса
	int size;
	int* Vector;
public:
	vector();//конструктор без параметров
	vector(int VectorLength);//конструктор инициализации
	vector(const vector& ForCopy);//конструктор копирования
	~vector();//деструктор

	void SetSize(int VectorLength);//метод, который помогает задать размерности вектора
	int GetSize();//метод определения количества элементов заданного вектора
	int GetAnElement(int i);//метод получения i-го элемента вектора
	void BringValue(int i, int Value);//метод присваивания i-му элементу вектора значения
	void VectorSum(int SumValue);//метод прибавления числа к элементам вектора
	void VectorSubtraction(int SubtractionValue);//метод вычитания числа из элементов вектора
	void VectorDeduction(int SubtractionValue);//метод умножения числа на элементы вектора
	void VectorDevision(int SubtractionValue);//метод вычитания числа из элементов вектора
	double LengthCalculation();//метод вычисления модуля длины вектора
	vector TwoVectorSum(const vector& X, const vector& Y, vector& Sum);//метод поэлементного суммирования элементов вектора
	vector TwoVectorSubtraction(const vector& X, const vector& Y, vector& Subtraction);//метод поэлементного вычитания элементов вектора
	vector TwoVectorDeduction(const vector& X, const vector& Y, vector& Deduction);//метод поэлементного умножения элементов вектора
	vector TwoVectorDevision(const vector& X, const vector& Y, vector& Devision);//метод поэлементного деления элементов вектора
	void RandomFilling();//заполнение вектора рандомными числами
	void KeyboardFilling();//заполнение вектора с клавиатуры
	void Reading();//вывод вектора на экран
	void VectorZCreation(const vector& X, const vector& Y);//создание вектора Z
	void operator +(int N);//перегрузка оператора +
};

