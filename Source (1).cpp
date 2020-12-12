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
    vector(const vector& old) {//к. копирования
        this->size = old.size;
        this->X = new int[old.size];
        this->Y = new int[old.size];
        for (int i = 0; i < old.size; i++)
        {
            this->X[i] = old.X[i];

        }
        for (int i = 0; i < old.size; i++)
        {
            this->Y[i] = old.Y[i];

        }
    }
    ~vector() {
        delete[] X;
        delete[] Y;
    }
    void set_size(int Size) {
        size = Size;
        X = new int[size];
        Y = new int[size];
    }
    int get_size() {
        return size;
    }
    void fill_inX() {
        for (int i = 0; i < size; i++) {
            X[i] = rand() % 10 + 1;
        }
    }
    void fill_inY() {
        for (int i = 0; i < size; i++) {
            Y[i] = rand() % 10 + 1;
        }
    }
    void length_calculation() {
        int Xmax = 0;
        int Ymax = 0;
        for (int i = 0; i < size; i++) {
            if (sqrt(pow(X[i], 2) + pow(Y[i], 2)) > sum) {
                sum = sqrt(pow(X[i], 2) + pow(Y[i], 2));
                Xmax = X[i];
                Ymax = Y[i];
            }   
        }
        cout << "\nThe largest vector is vector with coords " << Xmax << " on X and " << Ymax << " on Y and length of this vector is " << sum;
    }
    void FillElements()
    {
    for (int i = 0; i<size; i++)
    {
        cout << "Input the coord X = ";
        cin >> X[i];
        cout << "\nInput the coord Y = ";
        cin >> Y[i];
		}
		}
};

int main()
{
    srand(time(NULL));
    vector X;
    X.set_size(10);
    X.fill_inX();
    X.fill_inY();
    X.length_calculation();
    cout << endl;
}