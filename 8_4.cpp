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
	cout << " ����������� 2-�� �������� : ";
	cin >> VectorLength;
	vector X(VectorLength);
	X.RandomFilling();
	cout << " ������ X : " << endl;
	X.Reading();
	vector Y(VectorLength);
	Y.RandomFilling();
	cout << " ������ Y : " << endl;
	Y.Reading();
	vector Z(VectorLength);
	Z.VectorZCreation(X, Y);
	cout << " ������ Z : " << endl;
	Z.Reading();
	vector Sum(VectorLength);
	Sum.TwoVectorSum(X, Y, Sum);
	cout << " ����� �������� X � Y : " << endl;
	Sum.Reading();
}