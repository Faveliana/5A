// Сейидова Махым 6 гр(Лаб 7-1 А вариант 5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Код написан на Visual Studio 2019 
//Даны два вектора (одномерных массива), содержащих n вещественных элементов. Найти скалярное произведение двух векторов
#include <iostream>
#include <time.h>;
using namespace std;

void Print(double* arr, int n); //вывод на экран
void Skalar_proiz(double* arr1, double* arr2, int n); //скалярное произведение
//double-тип данных для хранения вещественных значений
void main()
{
	int n;
	cout << "Vvedite n: ";
	cin >> n;
	cout << endl;

	double* arr1 = new double[n],
		* arr2 = new double[n];
	srand(time(NULL)); //генерация рандомных чисел
	for (int i = 0; i < n; i++)
	{
		arr1[i] = rand() % 15;
		arr2[i] = rand() % 10;
	}

	Print(arr1, n);
	Print(arr2, n);
	Skalar_proiz(arr1, arr2, n);
}

void Print(double* arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void Skalar_proiz(double* arr1, double* arr2, int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr1[i] * arr2[i];
	cout << "Sum = " << sum << endl;
}

