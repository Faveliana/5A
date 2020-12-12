#include <iostream>
#include <ctime>
#include <cmath>
#include "Glavnoe.h"

using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	setlocale(LC_ALL, "ru");
	int VectorLength;
	cout << " Размерность 2-ух векторов : ";
	cin >> VectorLength;
	vector X(VectorLength);
	X.RandomFilling();
	cout << " Вектор X : " << endl;
	X.Reading();
	vector Y(VectorLength);
	Y.RandomFilling();
	cout << " Вектор Y : " << endl;
	Y.Reading();
	vector Z(VectorLength);
	Z.VectorZCreation(X, Y);
	cout << " Вектор Z : " << endl;
	Z.Reading();
	vector Sum(VectorLength);
	Sum.TwoVectorSum(X, Y, Sum);
	cout << " Сумма векторов X и Y : " << endl;
	Sum.Reading();
}