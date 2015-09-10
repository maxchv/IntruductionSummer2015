// HomeWork13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
	int x, y;
public:
	//  онструктор по умолчанию
	Point() { 
		cout << "Default constructor" << endl; 
		x = y = 0; 
	}
	// ѕерегруженный конструктор с одним параметром типа int
	// ѕри перегрузке методов и функций агрументы должны отличатьс€
	// или типами данных или количеством
	Point(int x1)
	{
		cout << "x " << x1 << " is int" << endl;
		x = x1;
		y = 0;
	}
	// ѕерегруженный конструктор с одним параметром типа double
	Point(double x1)
	{
		cout << "x " << x1 << " is double" << endl;
		x = x1;
		y = 0;
	}
	// ѕерегруженный конструктор с двум€ параметрами типа int
	Point(int x1, int y1) {
		cout << "Constructor with arguments" << endl; 
		x = x1;
		y = y1;
	}
	void set_x(int x1){	x = x1; }
	int get_x(){ return x; }
	void set_y(int y1){	y = y1; }
	int get_y(){ return y; }
	void show(){ cout << "x: " << x << " y: " << y << endl; }

	// метод определ€ющий рассто€ни€ от текщей точки до точки p
	double distance(Point p)
	{
		return sqrt((x - p.get_x()) * (x - p.get_x()) +
			        (y - p.get_y()) * (y - p.get_y()));
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	Point p1(10, 20), p2(30, 40);
	
	//p1.set_x(10); p1.set_y(20);
	p1.show();
	//p2.set_x(30); p2.set_y(40);
	p2.show();

	double d = p1.distance(p2);
	cout << "distance: " << d << endl;

	Point p3(50, 60);
	p3.show();

	Point p4(1.2);
	Point p5(1);

	return 0;
}

