// Inheirtance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/* ������� ������ ���������� ����������
   ����� ��������� */
void swap_num(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/* ������� ������ ���������� ���������� �����
   ������.
   ������ � ������ ��� ������, ���������� ������� ������ ���������, 
   ������� ��� ������������� ������������� ����������������. 
   */
void swap_num2(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

// ������� �����
class Shape
{
private:
	string name; // �������� �������������� �����
protected:
	int *x; // ���������� ����. ������������ ��� ������������ ������� �� ����������
	int *y;
public:
	Shape() { name = "Shape"; }     // ����������� �� ���������
	Shape(char *n) { name = n; }    // ����������� � �����������

    // ����������� ����� - ��� �����, ������� ����� ���� ������������ 
    // � �������-����������� ���, ��� ���������� ���������� ������ ��� 
    // ������ ����� ������������ �� ����� ����������. 
	virtual double area () {        // ����� ������� ������� ������ ����� ��������� � �����������
		cerr << "It is base class Shape" << endl;
		return 0;
	}
	virtual void show() {           // �����, ������� �� ���������� � �����������
		cout << "Area of " << name << ": " << area() << endl;
	}
};

// ���������� ����� - ����������
class Circle: public Shape
{
	double radius;
public: 
	Circle(double r): Shape("Circle") // �������� ����������� �������� ������
	{ 
		//name = "Circle"; -- ��� ������� � �������� �����
		// ��������� ������ � ����� �++
		x = new int; // (int *)malloc(sizeof(int));
		y = new int; // � ���������� ����� �������� ������ �� ����� �������� ������ ������
		radius = r;
		delete x;   // ������� ������, ������ free(x);
		delete y;
	}

	double area() { // ������������� ���������� ������
		//Shape::area(); // ���� �����, �� ����� ������� ����� �������� ������
		return radius*radius*3.14;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 10, b = 0;
	//swap_num(&a, &b); // �������� ����� ���������
	swap_num2(a, b); // �������� ����� ������
	cout << "a: " << a << " b: " << b << endl;

	//Shape shape;
	//shape.area();

	Circle circle(1);
	circle.show();

	return 0;
}

