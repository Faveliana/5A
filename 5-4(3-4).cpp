// 5-4(3-4).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//  Код был написан на Visual Studio 2019
/// Сейидова Махым 6 группа 5 лабораторная, 4 задача, 5 вариант, v2

#include <iostream>
#include<iomanip>
using namespace std;

const int N = 5; // размер матрицы
//Передаем двумерные массивы в качестве параметров
       ////функция не возвращает значения
void Fill_arr_Random(int matrix[N][N]); 
void Min_mult_column(int matrix[N][N]);
void Sum_max_row(int matrix[N][N]);
void Print_arr(int matrix[N][N]);
// прототип функции  
void main()
{
	int matrix[N][N];  

	Fill_arr_Random(matrix);
	Print_arr(matrix);
	Min_mult_column(matrix);
	Sum_max_row(matrix);

}

void Fill_arr_Random(int matrix[N][N]) //заполнения матрицы случайными числами
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			matrix[i][j] = rand() % 5 + 1;
	}
}
//находим столбец с минимальным произведением элементов
void Min_mult_column(int matrix[N][N])  
{
	int mult, minmult = INT_MAX, minindex = 0;
	for (int i = 0; i < N; i++)
	{
		mult = 1;
		for (int j = 0; j < N; j++)
		{
			mult *= matrix[j][i];
		}
		if (mult < minmult)
		{
			minmult = mult;
			minindex = i;
		}
	}
	cout << "Proizvedeniye stolbsa # " << minindex << " = " << minmult << endl;
}
//находим сумму элементов тех строк, в которых находится наибольший элемент матрицы.
void Sum_max_row(int matrix[N][N])
{
	int max = matrix[0][0], maxi = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (max < matrix[i][j])
			{
				max = matrix[i][j];
				maxi = i;
			}
		}
	}
	int sum, k;
	for (int i = 0; i < N; i++)
	{
		sum = 0;
		k = 0;
		for (int j = 0; j < N; j++)
		{
			sum += matrix[i][j];
			if (matrix[i][j] == max)
			{
				k = 1;
				continue;
			}
		}
		if (k >= 1)
			cout << "Summa stroki # " << i << " s max elementom = " << sum << endl;
	}

}

void Print_arr(int matrix[N][N]) //вывод на экран
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << setw(4) << matrix[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}
