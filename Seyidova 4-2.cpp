// Seyidova 4-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

    #include <iostream>
		#include <iomanip>
		#define _USE_MATH_DEFINES
		using namespace std;   
		const int N = 5;

		void Fill_arr_Random(int matrix[N][N]);
		void Min_mult_column(int matrix[N][N]);
		void Sum_max_row(int matrix[N][N]);
		void Print_arr(int matrix[N][N]);

		void main()
		{
			int matrix[N][N];

			Fill_arr_Random(matrix);
			Print_arr(matrix);
			Min_mult_column(matrix);
			Sum_max_row(matrix);

		}

		void Fill_arr_Random(int matrix[N][N])
		{
			srand(time(NULL));
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
					matrix[i][j] = rand() % 5 + 1;
			}
		}

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
			cout « "Proizvedeniye stolbsa # " « minindex « " = " « minmult « endl;
		}

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
					cout « "Summa stroki # " « i « " s max elementom = " « sum « endl;
			}

		}

		void Print_arr(int matrix[N][N])
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
					cout « setw(4) « matrix[i][j] « " ";
				cout « endl;
			}
			cout « endl;
		}

			






























