// Сейидова Махым 6 гр (Лаб 10-1 А 5 вариант).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//Для каждого класса описать поля, характеризующие объект, и методы, позволяющие заполнять и получать значения каждого из полей.
//выводить значения полей на экран, а также необходимые конструкторы.Конструк - торы и методы должны проверять параметры на допустимость.
//Определить и описать иерархию классов (точка, линия, прямоугольник, геометрическая фигура)


#include <iostream>
#include <string.h>
using namespace std;

class Point
{
protected:
	double x,
		y;
public:
	Point()
	{
		x = double();
		y = double();
	}
	Point(double _x, double _y)
	{
		x = _x;
		y = _y;
	}

	void Set_x(double _x);
	void Set_y(double _y);

	double Get_x();
	double Get_y();

	void Print();
};

class Line :public Point
{
protected:
	Point a,
		b;
public:
	Line()
	{}
	Line(Point _a, Point _b)
	{
		a = _a;
		b = _b;
	}

	void Set_a(Point a);
	void Set_b(Point b);

	Point Get_a();
	Point Get_b();

	void Print();

};

class Rectangle :public Line
{
protected:
	Line len,
		wid;
public:
	Rectangle()
	{}
	Rectangle(Line a, Line b)
	{
		len = a;
		wid = b;
	}
	void Set_len(Line a);
	void Set_wid(Line b);

	Point Get_len();
	Point Get_wid();

	void Print();

};

class Geom_figure :public Rectangle
{
private:
	string type;
	Rectangle obj;
public:
	Geom_figure()
	{
		type = string();
		obj = Rectangle();
	}
	Geom_figure(string s, Rectangle r)
	{
		if (s == "rectangle")
			type = s;
		else
			type = "undefined";
		obj = r;
	}

	void Set_type(string s);
	void Set_obj(Rectangle r);

	string Get_type();
	Rectangle Get_obj();

	void Print();
};
/*class Point*/

void Point::Set_x(double _x)
{
	x = _x;
}

void Point::Set_y(double _y)
{
	y = _y;
}

double Point::Get_x()
{
	return x;
}

double Point::Get_y()
{
	return y;
}

void Point::Print()
{
	cout << "Class Point:\n";
	cout << "\tA( " << x << ", " << y << " )" << endl;
}

/*class Line*/

void Line::Set_a(Point _a)
{
	a = _a;
}

void Line::Set_b(Point _b)
{
	b = _b;
}

Point Line::Get_a()
{
	return a;
}

Point Line::Get_b()
{
	return b;
}

void Line::Print()
{
	cout << "Class Line:\n";
	cout << "\tA1( " << a.Get_x() << ", " << a.Get_y() << " )" << endl;
	cout << "\tA2( " << b.Get_x() << ", " << b.Get_y() << " )" << endl;

}

/*class Rectangle*/

void Rectangle::Set_len(Line a)
{
	len = a;
}

void Rectangle::Set_wid(Line b)
{
	wid = b;
}

Point Rectangle::Get_len()
{
	return len;
}

Point Rectangle::Get_wid()
{
	return wid;
}

void Rectangle::Print()
{

	cout << "\tLength( ( " << len.Get_a().Get_x() << ", " << len.Get_a().Get_y() << " ), ( "
		<< len.Get_b().Get_x() << ", " << len.Get_b().Get_y() << " ) )" << endl;

	cout << "\tWidth( ( " << wid.Get_a().Get_x() << ", " << wid.Get_a().Get_y() << " ), ( "
		<< wid.Get_b().Get_x() << ", " << wid.Get_b().Get_y() << " ) )" << endl;

}

/*class Geom_figure*/

void Geom_figure::Set_type(string s)
{
	if (s == "rectangle")
		type = s;
	else
		type = "undefined";

}

void Geom_figure::Set_obj(Rectangle r)
{
	obj = r;
}

string Geom_figure::Get_type()
{
	return type;
}

Rectangle Geom_figure::Get_obj()
{
	return obj;
}

void Geom_figure::Print()
{
	cout << "Class Geom_figure:\n";
	cout << type << endl;
	obj.Print();

}
/*class Point*/

void Point::Set_x(double _x)
{
	x = _x;
}

void Point::Set_y(double _y)
{
	y = _y;
}

double Point::Get_x()
{
	return x;
}

double Point::Get_y()
{
	return y;
}

void Point::Print()
{
	cout << "Class Point:\n";
	cout << "\tA( " << x << ", " << y << " )" << endl;
}

/*class Line*/

void Line::Set_a(Point _a)
{
	a = _a;
}

void Line::Set_b(Point _b)
{
	b = _b;
}

Point Line::Get_a()
{
	return a;
}

Point Line::Get_b()
{
	return b;
}

void Line::Print()
{
	cout << "Class Line:\n";
	cout << "\tA1( " << a.Get_x() << ", " << a.Get_y() << " )" << endl;
	cout << "\tA2( " << b.Get_x() << ", " << b.Get_y() << " )" << endl;

}

/*class Rectangle*/

void Rectangle::Set_len(Line a)
{
	len = a;
}

void Rectangle::Set_wid(Line b)
{
	wid = b;
}

Point Rectangle::Get_len()
{
	return len;
}

Point Rectangle::Get_wid()
{
	return wid;
}

void Rectangle::Print()
{

	cout << "\tLength( ( " << len.Get_a().Get_x() << ", " << len.Get_a().Get_y() << " ), ( "
		<< len.Get_b().Get_x() << ", " << len.Get_b().Get_y() << " ) )" << endl;

	cout << "\tWidth( ( " << wid.Get_a().Get_x() << ", " << wid.Get_a().Get_y() << " ), ( "
		<< wid.Get_b().Get_x() << ", " << wid.Get_b().Get_y() << " ) )" << endl;

}

/*class Geom_figure*/

void Geom_figure::Set_type(string s)
{
	if (s == "rectangle")
		type = s;
	else
		type = "undefined";

}

void Geom_figure::Set_obj(Rectangle r)
{
	obj = r;
}

string Geom_figure::Get_type()
{
	return type;
}

Rectangle Geom_figure::Get_obj()
{
	return obj;
}

void Geom_figure::Print()
{
	cout << "Class Geom_figure:\n";
	cout << type << endl;
	obj.Print();

}



void main()
{
	Point p(2, 3);
	Point p2(2, 6);
	Point p3(8, 3);
	Point p4(8, 6);
	p2.Print();
	cout << endl;

	Line l(p, p3);
	Line l2(p3, p4);
	l.Print();
	cout << endl;

	cout << "Class Rectangle:\n";
	Rectangle r(l, l2);
	r.Print();
	cout << endl;

	Geom_figure g("rectangle", r);
	g.Print();
}




