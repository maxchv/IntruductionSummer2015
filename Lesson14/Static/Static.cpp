// Static.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
	Статическая пременная в функци после инициализации
	остается в памяти до конца программы. 
	Вы можете думать об этом, как о переменной, которая 
	хранит свое значение до полного завершения программы.
*/
int sum(int a)
{
	static int b = 0; // статическая переменная сохраняет значение между вызовами функции
	b += a;
	return b;
}

void ex00()
{
	cout << sum(10) << endl;
	cout << sum(20) << endl;
	cout << sum(30) << endl;
}


/* Статические поля и методы в классе не
   принадлежат к экземплярам класса, а принадлежат
   к самим классам. Так, статическием методы
   можно вызвать до создания экземпляров класса (объектов)*/
class Bank // класс Банк
{
	static int pass;		// пароль доступа к изменению курса валют
	static double currency; // текущий курс валют. Так как курс валют должен быть
	                        // одинаковый для всех филиалов - делаем его статическим
public:
	static void changeCurrency() // статический метод изменения курса валют
	{
		cout << "Type password: ";
		int tmp;
		cin >> tmp;
		if(tmp == pass)
		{
			cout << "Type new currency: ";
			cin >> currency;
			cout << "New currency is: " << currency << endl;
		}
	}
	double toBaks(double grivna) // обмен в доллары
	{
		return grivna / currency;
	}
	double toGrivna(double baks) // обмен в гривны
	{
		return baks*currency;
	}
};

// статические переменные должны быть инициализированы до
// первого использования
double Bank::currency = 23.5; // текущий курс валют
int Bank::pass = 1234;        // текущий пароль

int _tmain(int argc, _TCHAR* argv[])
{
	Bank::changeCurrency();	// т.к. метод changeCurrency статический - можем задать курс
	                        // до создания первого объекта - филиала.
					        // для этого используем оператор расширения области 
	                        // видимости ::
	Bank branch1, branch2, branch3; // создаем филиалы банка
	// меням гривны на доллары
	cout << "$"<< branch1.toBaks(2350) << endl;
	cout << "$"<< branch2.toBaks(2350) << endl;
	cout << "$"<< branch3.toBaks(2350) << endl;

	branch1.changeCurrency(); // меняем курс валют для всех филиалов, а не только для branch1
	cout << "$"<< branch1.toBaks(2350) << endl;
	cout << "$"<< branch2.toBaks(2350) << endl;
	cout << "$"<< branch3.toBaks(2350) << endl;

	return 0;
}

