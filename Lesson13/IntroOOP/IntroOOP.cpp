// IntroOOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// Полиморфизм - единый интерфейс для работы с разными данными
// Пример перегруженных функций sum 
//int sum(int a, int b)
//{
//	cout << "This is int version" << endl;
//	return a + b;
//}
//
//float sum(float a, float b)
//{
//	cout << "This is float version" << endl;
//	return a + b;
//}

// Шаблонная функция: вместо T подставляется тип данных
template <typename T>
T sum (T a, T b)
{
	return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	sum(1, 2);
	sum((float)1, (float)2);
	sum((double)1, (double)2);
	sum((char)1, (char)2);

	return 0;
}

