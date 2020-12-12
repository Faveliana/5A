// Сейидова Махым 6 группа(Лаб 6-2,5 вариант) Visual studio 2019.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Код написан на Visual studio 2019 
//Написать программу для создания массива записей со сведениями о студентах (ФИО, возраст, курс, пол, успеваемость). 
//По заданному массиву определить:средний бал успеваемости студентов n курса. 

#include <iostream>
#include <string>
using namespace std;

// в коде я использую this-> это я делаю для того, чтобы показать что это относится именно к структуре
struct Student
{
    string FIO;
    int age;
    int course;
    bool gender; // true - man, false - woman;
    double* marks = new double[5]; // обьявляем массив в 5 элементов

    void print()
    {
        cout << "ФИО: " << this->FIO << endl;
        cout << "Возраст: " << this->age << endl;
        cout << "Курс: " << this->course << endl;
        cout << "Пол: " << (this->gender ? "Мужчина" : "Женщина") << endl; // тернарный оператор для булевой переменной
                                                                           //чтобы определить пол
        cout << "Оценки: " << endl;
        for (int i = 0; i < 5; ++i)
        {
            cout << "Оценка " << i + 1 << ": " << this->marks[i] << endl;
        }
    }

    //вводим каждую оценку каждого студента
    void fill_marks()
    {
        for (int i = 0; i < 5; ++i)
        {
            cout << "(" << this->FIO << ") Введите оценку " << i + 1 << ": ";
            cin >> this->marks[i];

        
 }
    }

    //высчитывает средний балл каждого студента (исчходя из 5 оценок, что мы ввели)
    double avr_marks()
    {
        double avr = 0;
        for (int i = 0; i < 5; ++i)
        {
            avr += this->marks[i];
        }
        return avr / 5.0; //возвращает значение среднего балла студента
    }

    Student(string FIO, int age, bool gender, int course)
    {
        this->FIO = FIO;
        this->age = age;
        this->gender = gender;
        this->course = course;
    }
};

void main(void)
{
    setlocale(LC_ALL, "Russian");
    Student* students = new Student[5] //string FIO, int age, bool gender, int course
    {
        Student("Сейидова Махым Мухамедсердаровна", 19, false, 2),
        Student("Иванов Игор Алексеевич", 20, true, 2),
        Student("Мелкумян Мелисса Георгевна ", 17, true, 1),
        Student("Кузнецов Дмитрий Анатольевич", 21, false, 3),
        Student("Мяу Маркиз Маркизосян", 23, true, 4)
    };

    //цикл, чтобы можно было вывести все оценки
    for (int i = 0; i < 5; ++i)
    {
        students[i].fill_marks();
    }

    // вводим курс и считаем средний балл этого курса
    int course;
    cout << "Введите курс: ";
    cin >> course;
    int count = 0; //счетчик, для того чтобы понять сколько студентов учится на определенном курсе 
    double avrg_mark = 0; //счетчик, который складывает все средние баллы

    for (int i = 0; i < 5; ++i)
    {
        if (students[i].course == course)
        {
            avrg_mark += students[i].avr_marks();
            ++count;
            students[i].print(); //выводится вся информация про студентов введенного курса
            cout << endl;
        }
    }
    cout << "Средний балл " << course << " курса: " << avrg_mark / count;
}