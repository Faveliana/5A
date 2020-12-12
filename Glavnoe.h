#pragma once
#include <iostream>
#include <ctime>
#include <cmath>

class vector
{
private:
	//���� ������
	int size;
	int* Vector;
public:
	vector();//����������� ��� ����������
	vector(int VectorLength);//����������� �������������
	vector(const vector& ForCopy);//����������� �����������
	~vector();//����������

	void SetSize(int VectorLength);//�����, ������� �������� ������ ����������� �������
	int GetSize();//����� ����������� ���������� ��������� ��������� �������
	int GetAnElement(int i);//����� ��������� i-�� �������� �������
	void BringValue(int i, int Value);//����� ������������ i-�� �������� ������� ��������
	void VectorSum(int SumValue);//����� ����������� ����� � ��������� �������
	void VectorSubtraction(int SubtractionValue);//����� ��������� ����� �� ��������� �������
	void VectorDeduction(int SubtractionValue);//����� ��������� ����� �� �������� �������
	void VectorDevision(int SubtractionValue);//����� ��������� ����� �� ��������� �������
	double LengthCalculation();//����� ���������� ������ ����� �������
	vector TwoVectorSum(const vector& X, const vector& Y, vector& Sum);//����� ������������� ������������ ��������� �������
	vector TwoVectorSubtraction(const vector& X, const vector& Y, vector& Subtraction);//����� ������������� ��������� ��������� �������
	vector TwoVectorDeduction(const vector& X, const vector& Y, vector& Deduction);//����� ������������� ��������� ��������� �������
	vector TwoVectorDevision(const vector& X, const vector& Y, vector& Devision);//����� ������������� ������� ��������� �������
	void RandomFilling();//���������� ������� ���������� �������
	void KeyboardFilling();//���������� ������� � ����������
	void Reading();//����� ������� �� �����
	void VectorZCreation(const vector& X, const vector& Y);//�������� ������� Z
	void operator +(int N);//���������� ��������� +
};

