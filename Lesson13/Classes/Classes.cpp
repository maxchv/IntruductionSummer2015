// Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>

// ����������� - �������� ������ � ������� �� ������ � ������� � ����� �������
class Car        // ���������� ������
{
public:          // ������������ ������ ������� - ��������, �� ��������� - ��������
	string name; // ���� ������
	string color;
	void set_model(string m){model = m;} // ������ ������
	void set_speed(int s){ speed = s; }
	void set(string m, int s){model = m; speed = s; }
	void show(){ cout << name << " " << model << " " << color << endl;}

private:        // �������� ����. ��� ��������� �������� ���������� ������� ������
	string model;
	int speed;
};

class Admin
{
	string login; // �� ��������� ��� ���� �������
	string password;
public:
	//void init()
	Admin() // ����������� �� ���������
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

	//Car mazda; // �������� ���������� ������ ��� �������
	//mazda.name = "Mazda";
	//mazda.color = "Red";
	//mazda.set_model("RX7");
	//mazda.show();

	Admin admin;
	//admin.init();
	admin.PleesGetMyInternet("user", "1234");
	return 0;
}

