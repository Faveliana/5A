// Сейидова Махым 6 гр(Лаб 7-3 А вариант 5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Код написан на Visual Studio 2019
// Подсчитать количество столбцов заданной матрицы, которые составлены из различных чисел.
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

void main(void)
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    cout << "Введите разрядность матрицы: ";
    int N;
    cin >> N; //разрядность матрицы

    int** matrix = new int* [N]; //int** указатель на указатель на обьект типа инт
    for (int i = 0; i < N; ++i)
        matrix[i] = new int[N];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            matrix[i][j] = rand() % 10; //заполнение матрицы числами от 1 до 10
        }
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
        int* memory = new int[N]; //массив, который помогает проверить уникальность 
        for (int j = 0; j < N; ++j)
        {
            if (fine_line[i] == false)
            {
                break;
            }
            memory[j] = matrix[j][i];
            for (int k = 0; k < j; ++k)
            {
                if (matrix[j][i] == memory[k])
                {
                    fine_line[i] = false;
                    break;
                }
            }
        }
        delete[] memory; //удаляем, чтобы занимало меньше памяти
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
        delete[] matrix[i];
    delete[] matrix;
}