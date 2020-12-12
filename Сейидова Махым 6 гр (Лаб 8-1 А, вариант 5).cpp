// Сейидова Махым 6 гр (Лаб 8-1 А, вариант 5).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Код написан на Visual Studio 2019

//Вывести новое слово - объект, упорядочив по возрастанию в лексикографическом порядке буквы исходного слова.
#include <string>
#include <iostream>
#include <utility>
#include <algorithm> // for std::sort
//используем std:: вместо using manespase std, потому что код не должен быть привязанным к какому то окружению
//а класс используется в обьектно-ориентированном прогромировании 


class cClass //   объявление класса 
{
    std::string objString;
public: //   это модификатор, его мы пишем, чтобы в мэйне могли инициализировать наши объекты

    cClass(); //конструктор по умолчанию

    cClass(std::string _word) //конструктор инициализирует обьект словом _word
    {
        this->objString = std::move(_word);
    }

    cClass(char _symbol, int _repeats) //конструктор _symbol инициализирует объект _repeats
    {
        std::string temp(_repeats, _symbol);
        this->objString = temp;
    }

    cClass(int _firstNLetters, std::string _word) //конструктор _firstNLetters инициализирует объект _word
    {
        for (size_t i = 0; i < _firstNLetters; ++i)
        {
            this->objString += _word[i];
        }
    }

    cClass(const cClass& obj) //конструктор копирования принимает обьект cClass и копирует его слово в новый объект 
    {
        this->objString = obj.objString;
    }

    //прототип метода ввод и вывода изначальной строки
    void setString()
    {
        std::cout << "Enter string: ";
        std::cin >> this->objString;
    }

    //прототип метода вывода новой строки
    void printString()
    {
        std::cout << "Your string: " << this->objString << std::endl;
    }

    //прототип метода сортировки строки
    void sort()
    {
        std::sort(this->objString.begin(), this->objString.end());
    }
};

int main()
{
    // тип string, функция foo()
    std::string foo = "abbbbba";
    char aLetter = 'a';

    cClass defaultObj(); //конструктор без параметров
    cClass objByWord(foo); //здесь будет вызываться конструктор, который инициализирует слова заданным словом-инициализатором
    cClass objByLetter(aLetter, 5); //здесь будет вызываться конструктор, который 
                                    //инициализирует слова заданным количеством повторов заданного сим-вола
    cClass objByAPartOfWord(5, foo); // здесь будет вызываться конструктор, 
                                    //который инициализирует слова частью заданного слова-инициализатора
    cClass copyObj(objByWord); //здесь будет вызываться конструктор копирования

    objByWord.sort(); //упорядочивает по возрастанию в лексикографическом порядке буквы исходного слова
    objByWord.printString(); //вывод слова

    return 0;
}