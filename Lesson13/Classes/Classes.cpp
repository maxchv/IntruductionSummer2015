// Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>

// инкапсул€ци - хранение данных и методов по работе с данными в одном объекте
class Car        // объ€вление класса
{
public:          // квалификатор уровн€ доступа - открытый, по умолчанию - закрытый
	string name; // пол€ класса
	string color;
	void set_model(string m){model = m;} // методы класса
	void set_speed(int s){ speed = s; }
	void set(string m, int s){model = m; speed = s; }
	void show(){ cout << name << " " << model << " " << color << endl;}

private:        // закрытые пол€. ƒл€ изменени€ значений используем отрктые методы
	string model;
	int speed;
};

class Admin
{
	string login; // по умолчанию все пол€ зкарыты
	string password;
public:
	//void init()
	Admin() // конструктор по умолчанию
	{
		cout << "Hi! I am admin" << endl;
		login = "user";
		password = "1234";
	}
	void PleesGetMyInternet(string _login, string _pass)
	{
		if(_login == login && _pass == password)
		{
			cout << "I will open you internet!" << endl;
		}
		else
		{
			cout << "Go out!" << endl;
		}
	}
};

int _tmain(int argc, _TCHAR* argv[])
{

	//Car mazda; // создание экземпл€ра класса или объекта
	//mazda.name = "Mazda";
	//mazda.color = "Red";
	//mazda.set_model("RX7");
	//mazda.show();

	Admin admin;
	//admin.init();
	admin.PleesGetMyInternet("user", "1234");
	return 0;
}

