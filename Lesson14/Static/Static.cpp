// Static.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
	����������� ��������� � ������ ����� �������������
	�������� � ������ �� ����� ���������. 
	�� ������ ������ �� ����, ��� � ����������, ������� 
	������ ���� �������� �� ������� ���������� ���������.
*/
int sum(int a)
{
	static int b = 0; // ����������� ���������� ��������� �������� ����� �������� �������
	b += a;
	return b;
}

void ex00()
{
	cout << sum(10) << endl;
	cout << sum(20) << endl;
	cout << sum(30) << endl;
}


/* ����������� ���� � ������ � ������ ��
   ����������� � ����������� ������, � �����������
   � ����� �������. ���, ������������ ������
   ����� ������� �� �������� ����������� ������ (��������)*/
class Bank // ����� ����
{
	static int pass;		// ������ ������� � ��������� ����� �����
	static double currency; // ������� ���� �����. ��� ��� ���� ����� ������ ����
	                        // ���������� ��� ���� �������� - ������ ��� �����������
public:
	static void changeCurrency() // ����������� ����� ��������� ����� �����
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
	double toBaks(double grivna) // ����� � �������
	{
		return grivna / currency;
	}
	double toGrivna(double baks) // ����� � ������
	{
		return baks*currency;
	}
};

// ����������� ���������� ������ ���� ���������������� ��
// ������� �������������
double Bank::currency = 23.5; // ������� ���� �����
int Bank::pass = 1234;        // ������� ������

int _tmain(int argc, _TCHAR* argv[])
{
	Bank::changeCurrency();	// �.�. ����� changeCurrency ����������� - ����� ������ ����
	                        // �� �������� ������� ������� - �������.
					        // ��� ����� ���������� �������� ���������� ������� 
	                        // ��������� ::
	Bank branch1, branch2, branch3; // ������� ������� �����
	// ����� ������ �� �������
	cout << "$"<< branch1.toBaks(2350) << endl;
	cout << "$"<< branch2.toBaks(2350) << endl;
	cout << "$"<< branch3.toBaks(2350) << endl;

	branch1.changeCurrency(); // ������ ���� ����� ��� ���� ��������, � �� ������ ��� branch1
	cout << "$"<< branch1.toBaks(2350) << endl;
	cout << "$"<< branch2.toBaks(2350) << endl;
	cout << "$"<< branch3.toBaks(2350) << endl;

	return 0;
}

