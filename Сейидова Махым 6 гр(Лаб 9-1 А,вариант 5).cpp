﻿// Сейидова Махым 6 гр(Лаб 9-1 А,вариант 5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//Даны два вектора (одномерных массива), содержащих n вещественных элементов. 
//Найти скалярное произведение двух векторов.  

#include <iostream>
#include <conio.h> // заголовочный файл, для создание текстового интерфейса пользователя
#include <vector>  // заголовочный файл для использования вектора
                   // вектор нужен для замены динамического массива, что позволяет избежать утечек памяти
#include <stdio.h> // ввод/вывод
#include <numeric> // для выполнения определенных операций над последовательностями числовых значений

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // чтобы можно было писать на русском
    size_t n; // size_t - может хранить максимальный размер теоретически возможного объекта любого типа
    cout << "Введите размерность пространства: " << endl;
    cin >> n; // количество элементов в каждом векторе
    vector<vector<int> > matrix(2, vector<int>(n)); // обьявляем новый вектор под названием matrix
    //2 - это количество векторов matrix
    // vector<int>(n) - это количество элементов в этих двух векторах 
    for (vector<vector<int> >::iterator i = matrix.begin(); i != matrix.end(); ++i)
        // vector<vector<int> >::iterator - это итератор для контейнера vector<vector<int>
        // с помощью итератора перебираются элементы 
        // функция begin() возвращает итератор, который указывает на первый элемент контейнера 
        // функция end() возвращает итератор, который указывает на следующую позицию после последнего элемента 
    {
        cout << "Введите вектор: " << endl;
        for (vector<int>::iterator j = i->begin(); j != i->end(); ++j)
            cin >> *j; //*j - элемент, на который указывает итреатор 
    }
    vector<int> vec; //обьявляем пустой вектор под названием vec
    for (size_t i = 0; i < n; ++i) //цикл, который заполняет этот вектор произведением 2 заданных векторов
    {
        vec.push_back(matrix[0][i] * matrix[1][i]); //push_back - для добавления нового элемента в конец вектора
                                                    // в матрице два параметра номер строки иномер столбца
                                 //номер столбца меняется в цикле и тем самым происходит произведение двух векторов
    }
    cout << "Скалярное произведение: " << accumulate(vec.begin(), vec.end(), 0) << endl;
    //accumulate - это численный алгоритм, тут он суммирует элемент. Точка старта это vec.begin(), 
    //конечная точка это vec.end(), 0 - это значение от которого начинаем прибавлять 

    system("pause");
    return 0;
}
