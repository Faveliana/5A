// Сейидова Махым 6 группа. Лаб 5-6 А вариант 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//Сейидова Махым 6 группа.Лаб 5 - 6 А, вариант 5.Код написан на Visual studio 2019
//сортировка вставкой и бинарной вставкой

#include <iostream>
#include<time.h>
using namespace std;

void Fill_Up(int* massiv, const int N);                    //заполнение массива значениями по возрастанию
void Fill_Down(int* massiv, const int N);                  //заполнение массива значениями по убыванию
void Fill_Random(int* massiv, const int N);                //заполнение массива случайными значениями            
void Print_massiv(int* massiv, const int N);               //вывод на экран
void sort_by_insert(int* massiv, const int N);             //сортировка вставкой
void sort_by_binary_insert(int* massiv, const int N);      //сортировка бинарной вставкой

void main()
{
	const int N = 10;                                      //размерности массива
	int massiv[N], massiv2[N];

	cout << "Filling array by ascending!" << endl;         //заполнение массива по возрастанию
	Fill_Up(massiv, N);
	for (int i = 0; i < N; i++)
		massiv2[i] = massiv[i];
	Print_massiv(massiv, N);
	sort_by_insert(massiv, N);
	Print_massiv(massiv, N);
	sort_by_binary_insert(massiv2, N);
	Print_massiv(massiv2, N);

	cout << endl << "Filling array by descending!" << endl;   //заполнение массива по убыванию
	Fill_Down(massiv, N);
	for (int i = 0; i < N; i++)
		massiv2[i] = massiv[i];
	Print_massiv(massiv, N);
	sort_by_insert(massiv, N);
	Print_massiv(massiv, N);
	sort_by_binary_insert(massiv2, N);
	Print_massiv(massiv2, N);

	cout << endl << "Random filling array!" << endl;     //Рандомное заполнение массива
	Fill_Random(massiv, N);
	for (int i = 0; i < N; i++)
		massiv2[i] = massiv[i];
	Print_massiv(massiv, N);
	sort_by_insert(massiv, N);
	Print_massiv(massiv, N);
	sort_by_binary_insert(massiv2, N);
	Print_massiv(massiv2, N);
}

	void Fill_Up(int* massiv, const int N)
	{                                                          //  присваиваем элементу его индекс
		for (int i = 0; i < N; i++)
			massiv[i] = i;
	}

	void Fill_Down(int* massiv, const int N)
	{                                               // присваиваем размерность           
		for (int i = 0; i < N; i++)
			massiv[i] = N - i;

	}

	void Fill_Random(int* massiv, const int N)
	{
		srand(time(NULL));
		for (int i = 0; i < N; i++)
			massiv[i] = rand() % 20;        // случайное целое число в диапазоне от 0 до 9

	}
	
	void Print_massiv(int* massiv, const int N)                //вывод массива на экран
	{
		for (int i = 0; i < N; i++)
			cout << massiv[i] << " ";
		cout << endl;
	}

	void sort_by_insert(int* massiv, const int N)           //сортировка вставкой
	{
		int comparison = 0, insert = 0;             //сравнение , вставка
		for (int i = 0; i < N; i++)             //перебор всех элементов начиная с первого
		{
			int temp = massiv[i];               // присвоение переменной temp текущего элемента
			int j = i - 1;
			comparison++;
			while (temp < massiv[j])
			{
				insert++;
				massiv[j + 1] = massiv[j];
				j--;
				if (j < 0)
					break;
			}
			massiv[j + 1] = temp;              //вставка текущего элемента в найденную позицию
		}
		cout << " Sort_by_insert!" << "\tcomparison=" << comparison << "\tinsert = " << insert << endl;
	}

	void sort_by_binary_insert(int* massiv, const int N)   //сортировка бинарной вставкой
	{
		int comparison = 0, insert = 0;   //сравнение , вставка
		for (int i = 0; i < N - 1; i++)
		{
			int min = massiv[i];
			int index_min = i;                            //индекс текущего элемента
			for (int j = i + 1; j < N; j++)                // поиск минимума в части массива от i+1 до конца
			{
				comparison++;
				if (massiv[j] < min)
				{
					min = massiv[j];                     // запоминаем текущий найденный минимум
					index_min = j;                       // его индекс
				}
			}

			//обмениваем местами текущего элемента и найденного минимального
			massiv[index_min] = massiv[i];
			massiv[i] = min;
			insert++;

		}
		cout << " sort_by_binary_insert!" << "\tcomparison=" << comparison << "\tinsert = " << insert << endl;
	}















//const int n = 5;
//
//int main()
//{
//    int a[n];
//    for (int i = 0; i < n; ++i)
//        scanf("%i", a + i);
//    for (int i = 0, x, j; i < n; ++i)
//    {
//        x = a[i];
//        for (j = i - 1; j >= 0 && a[j] > x; --j) a[j + 1] = a[j];
//        a[j + 1] = x;
//        // print result
//        for (j = 0; j < n; printf("%d ", a[j++]));
//        printf("\n");
//    }
//}



//////////Отсортировать массив по убыванию сортировка вставками
////////template<typename T, typename Cmp>
////////void isort(T* _f, T* _l, Cmp cmp) {
////////    T v, * i;
////////    for (T* p = _f + 1; p < _l; ++p) {
////////        v = *p;
////////        i = p;
////////        while ((i > _f) && cmp(v, *(i - 1))) {
////////            *i = *(i - 1);
////////            --i;
////////        }
////////        *i = v;
////////    }
////////}
////////
////////int main(void) {
////////    const int N = 32;
////////    int a[N];
////////    for (int& v : a)
////////        v = rand() % 1001;
////////
////////    isort(a, a + N, [](int a, int b) { return (a > b); });
////////    for (int v : a)
////////        std::cout << v << ' ';
////////    std::cin.get();
////////    return 0;
////////}