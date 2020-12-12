#include "Glavnoe.h"

vector::vector() //����������� ��� ���������� 
{
	size = 0;
	Vector = NULL;
};
vector::vector(int VectorLength) //���������� �������������
{
	size = VectorLength;
	Vector = new int[size];
};
vector::vector(const vector& ForCopy) //����������� �����������
{
	size = ForCopy.size;
	Vector = new int[size];
	for (int i = 0; i < size; i++)
		Vector[i] = ForCopy.Vector[i];
};
vector::~vector() //����������
{
	delete[] Vector;
	std::cout << " ~~~ " << std::endl;
}

void vector::SetSize(int VectorLength)
{
	size = VectorLength;
}

int vector::GetSize()
{
	return size;
}

int vector::GetAnElement(int i)
{
	if (i >= 0 && i < size)
		return Vector[i];
	else
	{
		std::cout << " ����� �� ������� �������! " << std::endl;
		return 0;
	}
}

void vector::BringValue(int i, int Value)
{
	if (i >= 0 && i < size)
		Vector[i] = Value;
	else
		std::cout << " ����� �� ������� �������! " << std::endl;
}

void vector::VectorSum(int SumValue)
{
	for (int i = 0; i < size; i++)
		Vector[i] += SumValue;
}

void vector::VectorSubtraction(int SubtractionValue)
{
	for (int i = 0; i < size; i++)
		Vector[i] -= SubtractionValue;
}

void vector::VectorDeduction(int SubtractionValue)
{
	for (int i = 0; i < size; i++)
		Vector[i] *= SubtractionValue;
}

void vector::VectorDevision(int DevisionValue)
{
	for (int i = 0; i < size; i++)
		Vector[i] /= DevisionValue;
}

double vector::LengthCalculation()
{
	double LengthOfVector;
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += Vector[i] * Vector[i];
	LengthOfVector = sqrt(sum);
	return LengthOfVector;
}

vector vector::TwoVectorSum(const vector& X, const vector& Y, vector& Sum)
{
	for (int i = 0; i < size; i++)
		Sum.Vector[i] = X.Vector[i] + Y.Vector[i];
	return Sum;
}

vector vector::TwoVectorSubtraction(const vector& X, const vector& Y, vector& Subtraction)
{
	for (int i = 0; i < size; i++)
		Subtraction.Vector[i] = X.Vector[i] + Y.Vector[i];
	return Subtraction;
}

vector vector::TwoVectorDeduction(const vector& X, const vector& Y, vector& Deduction)
{
	for (int i = 0; i < size; i++)
		Deduction.Vector[i] = X.Vector[i] * Y.Vector[i];
	return Deduction;
}
vector vector::TwoVectorDevision(const vector& X, const vector& Y, vector& Devision)
{
	for (int i = 0; i < size; i++)
		Devision.Vector[i] = X.Vector[i] / Y.Vector[i];
	return Devision;
}

void vector::RandomFilling()
{
	for (int i = 0; i < size; i++)
		Vector[i] = rand() % 10;
}

void vector::KeyboardFilling()
{
	std::cout << " ���������� ������� � ���������� " << std::endl;
	for (int i = 0; i < size; i++)
		std::cin >> Vector[i];
	std::cout << " ���������� ������� � ���������� ��������� " << std::endl;
}

void vector::Reading()
{
	for (int i = 0; i < size; i++)
		std::cout << Vector[i] << '\t';
	std::cout << std::endl;
}

void vector::VectorZCreation(const vector& X, const vector& Y)
{
	this->Vector[0] = 1;
	for (int i = 1; i < size; i++)
		this->Vector[i] = X.Vector[i] * Y.Vector[i] + X.Vector[i - 1] * Y.Vector[i - 1];
}

void vector::operator +(int N)
{
	for (int i = 0; i < size; i++)
		this->Vector[i] += N;
}