// OverloadOp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Number
{
	int x;
public:
	Number(int x1) { x = x1; }
	int get_x() { return x; }
	Number add(Number n2) 
	{
		return Number(x + n2.get_x());
	}
	// перегрузка оператора +
	Number operator+(Number n2)
	{
		return Number(x + n2.get_x());
	}
	// перегрузка оператора -
	Number operator-(Number n2)
	{
		return Number(x - n2.get_x());
	}
	// перегрузка оператора *
	Number operator*(Number n2)
	{
		return Number(x * n2.get_x());
	}
};

Number add(Number n1, Number n2)
{
	return Number(n1.get_x() + n2.get_x());
}

int _tmain(int argc, _TCHAR* argv[])
{
	Number val1(10), val2(2);
	cout << "v1: " << val1.get_x()  << " v2: " << val2.get_x() << endl;
	Number val = val1.add(val2); // вызов метода add для сложения двух чисел
	Number val3 = val1 + val2;   // вызов метода operator+ для сложения двух чисел
	cout << "v3: " << val3.get_x() << endl;
	Number val4 = val1 * val2;   // вызов метода operator* для умножения двух чисел
	cout << "v4: " << val4.get_x() << endl;

	return 0;
}

