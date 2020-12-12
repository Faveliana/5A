/*8.2. КЛАСС «СТУДЕНТ»
Разработать класс «Студент» и определить его методы:
•	Заполнение полей класса с клавиатуры
•	Вывод на экран

Реализовать конструкторы трех видов (без аргументов, инициализации, копирования) и деструктор.
Выполнить задание 6.2, используя объекты этого класса.
*/


#include<iostream>
#include<string>
using namespace std;

class Student {	
private:
	string Name;
	int Age;
	int Course;
	string Sex;
	int AverageMark;
public:
	Student() {
	
	}
	Student(string Name, int Age, int Course, string Sex, double AverageMark) {
		this->Name = Name;
		this->Age = Age;
		this->Course = Course;
		this->Sex = Sex;
		this->AverageMark = AverageMark;
	}
	
	string get_name()
	{
		return Name;
	}
	void set_name(string valuename) {
		Name = valuename;
	}

	int get_age()
	{


		Age = valueage;
	}

	int get_course()
	{
		return Course;
	}
	void set_course(int valuecourse) {
		Course = valuecourse;
	}

	string get_sex()
	{
		return Sex;
	}
	void set_sex(string valuesex) {
		Sex = valuesex;
	}

	int get_averagemark()
	{
		return AverageMark;
	}
	void set_averagemark(int valueaveragemark) {
		AverageMark = valueaveragemark;
	}
	~Student() {

	}
};

int main() {
	Student* arr;
	int N;
	string Name;
	int Age;
	int course;
	string Sex;
	int AverageMark;

	cout << "Enter amount students: ";
	cin >> N;
	cout << endl;

	arr = new Student[N];

	for (int i = 0; i < N; i++) {
		cout << "Name: ";
		cin >> Name;

		cout << "Age: ";
		cin >> Age;

		cout << "Course: ";
		cin >> course;

		cout << "Sex: ";
		cin >> Sex;

		cout << "AgerageMark: ";
		cin >> AverageMark;

		arr[i].set_name(Name);
		arr[i].set_age(Age);
		arr[i].set_course(course);
		arr[i].set_sex(Sex);
		arr[i].set_averagemark(AverageMark);
		cout << endl;
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i].get_name() << " " << arr[i].get_age() << " " << arr[i].get_course()  << " " << arr[i].get_sex() << " " << arr[i].get_averagemark() << endl;
	}
	cout << "Enter your course: ";
	cin >> course;

	for (int i = 1; i < N; i++)
	{
		if (course == arr[i].get_course())
		{
			Name = arr[i].get_age() < arr[i - 1].get_age() ? arr[i - 1].get_name() : arr[i].get_name();
		}
	}
	cout << Name;
	delete[] arr;
}