// Сейидова Махым 6 гр(Лаб 6-3 А вариант 5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Код написан на Visual Studio 2019
//Компоненты файла f – целые числа, положительных чисел столько же, сколько отрицательных. 
//Получить файл g из чисел исходного файла, в кото-ром не было бы двух соседних чисел с одинаковым знаком.

#include <iostream>
#include <time.h>
#include <fstream>
using namespace std;

void Fill_file(ofstream& fout, int* arr, int size);
void Read_file(ifstream& fin, int* arr, int size);
void Fill_file2(ofstream& fout, ifstream& fin, int* arr, int size);


void main()
{
	int n;
	cout << "Vvedite n: ";
	cin >> n;
	cout << endl;

	int* arr = new int[n];

	ofstream fout("F_file.txt"); //выходной поток
	if (!fout)
		cout << "File not finded!\n";

	ifstream fin("F_file.txt"); //входной поток
	if (!fout)
		cout << "File not finded!\n";

	Fill_file(fout, arr, n); //заполнение файла
	Read_file(fin, arr, n);  //чтение файла

	ofstream fout2("G_file.txt");
	if (!fout2)
		cout << "File not finded!\n";
	Fill_file2(fout2, fin, arr, n);
}

void Fill_file(ofstream& fout, int* arr, int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			arr[i] = rand() % 20;
			fout << arr[i];
		}
		else
		{
			arr[i] = rand() % 7 - 17;
			fout << arr[i];
		}
	}
}

void Read_file(ifstream& fin, int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		fin >> arr[i];
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Fill_file2(ofstream& fout, ifstream& fin, int* arr, int size)
{
	int* arr2 = new int[1];
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		fin >> arr[i];
	}

	for (int i = 1; i < size; i++)
	{
		if ((arr[i - 1] < 0 && arr[i + 1] < 0) || (arr[i - 1] > 0 && arr[i + 1] > 0))
		{
			arr2[j] = arr[i];
			fout << arr2[j];
			j++;
		}
	}
	fin.open("G_file.txt");
	Read_file(fin, arr2, j);
}
