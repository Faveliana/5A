// Сейидова Махым 6 гр(Лаб 9-2 А,вариант 5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


//Реализовать задание 7.3, 
//используя объявление и методы соответствующе-го параметризированного класса vector из стандартной библиотеки шаблонов STL.
//Подсчитать количество столбцов заданной матрицы, которые составлены из различных чисел
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	cout << "Введите разрядность матрицы: ";
	int N;
	cin >> N; //разрядность матрицы

	vector < vector < int >> matrix;
	vector<int> arr;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			arr.push_back(rand() % 10);
		}
		matrix.push_back(arr);
		arr.clear();
	}

	//цикл, благодаря которому выводится матрица
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	bool* fine_line = new bool[N]; //линии, которые правильные (уникальные)
	for (int i = 0; i < N; ++i)
	{
		fine_line[i] = true;
	}

	for (int i = 0; i < N; ++i)
	{
		vector<int> memory;
		for (int j = 0; j < N; ++j)
		{
			if (fine_line[i] == false)
			{
				break;
			}
			memory.push_back(matrix[j][i]);
			for (int k = 0; k < j; ++k)
			{
				if (matrix[j][i] == memory[k])
				{
					fine_line[i] = false;
					break;
				}
			}
		}
		memory.clear(); //удаляем, чтобы занимало меньше памяти
	}

	//цикл, для подсчета уникальных столбиков
	int count = 0;
	for (int i = 0; i < N; ++i)
	{
		if (fine_line[i] == true)
		{
			++count;
		}
	}

	cout << "Ответ: " << count;

	//удаляем, чтобы занимало меньше памяти
	delete[] fine_line;
	for (int i = 0; i < N; ++i)
		matrix[i].clear();
	matrix.clear();
}