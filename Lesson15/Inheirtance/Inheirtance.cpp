// Inheirtance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/* Функция обмена значениями аргументов
   через указатели */
void swap_num(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/* Функция обмена значениями аргументов через
   ссылки.
   Ссылки – особый тип данных, являющийся скрытой формой указателя, 
   который при использовании автоматически разименовывается. 
   */
void swap_num2(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

// Базовый класс
class Shape
{
private:
	string name; // название геометрической формы
protected:
	int *x; // защищенные поля. Присутствуют для демонстрации доступа из наследника
	int *y;
public:
	Shape() { name = "Shape"; }     // конструктор по умолчанию
	Shape(char *n) { name = n; }    // конструктор с параметрами

    // вирутальный метод - это метод, который может быть переопределён 
    // в классах-наследниках так, что конкретная реализация метода для 
    // вызова будет определяться во время исполнения. 
	virtual double area () {        // метод расчета площади фигуры будет уточнятся в наследниках
		cerr << "It is base class Shape" << endl;
		return 0;
	}
	virtual void show() {           // метод, который не перегружен в наследниках
		cout << "Area of " << name << ": " << area() << endl;
	}
};

// Произвдный класс - Окружность
class Circle: public Shape
{
	double radius;
public: 
	Circle(double r): Shape("Circle") // вызываем конструктор базового класса
	{ 
		//name = "Circle"; -- нет доступа к закрытым полям
		// выделение памяти в стиле С++
		x = new int; // (int *)malloc(sizeof(int));
		y = new int; // к защищенным полям базового класса мы можем получить прямой доступ
		radius = r;
		delete x;   // очистка памяти, аналог free(x);
		delete y;
	}

	double area() { // перегруженная реализация метода
		//Shape::area(); // если нужно, то можем вызвать метод базового класса
		return radius*radius*3.14;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 10, b = 0;
	//swap_num(&a, &b); // работаем через указатели
	swap_num2(a, b); // работаем через ссылки
	cout << "a: " << a << " b: " << b << endl;

	//Shape shape;
	//shape.area();

	Circle circle(1);
	circle.show();

	return 0;
}

