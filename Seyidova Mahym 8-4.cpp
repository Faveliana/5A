// Seyidova Mahym 8-4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

class vector {
private:
    int* X;//указатели на массив
    int* Y;
    int size;//размер массивов
    double sum = 0;
public:
    vector() {//к. по умолчению
        size = 0;
        X = nullptr;
        Y = nullptr;
    };
    vector(int size) {//к. инициализации
        this->size = size;
        this->X = new int[size];
        this->Y = new int[size];
        for (int i = 0; i < size; i++) {
            X[i] = rand() % 10 + 1;
        }
        for (int i = 0; i < size; i++) {
            Y[i] = rand() % 10 + 1;
        }
    }
  
}