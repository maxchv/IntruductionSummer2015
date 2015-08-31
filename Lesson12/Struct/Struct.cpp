/*
    ����:   Introduction
    ������� #12
    ����:   ��������� ������
*/
#include "stdafx.h"
#pragma warning(disable: 4996)

/* ��������� � ��� ���������������� ��� ������, ������� ������������ �����
    ����� ����������� ��������� ���������� 
   (���� � ������� ������ ������), �������� ����� ��������� ���.

   ����� ����������� ��������� - ��� ������, ������� �������� �� ��� ����� ����.
   ������: �������� ���������� ����� �� ���������
*/
struct Point
{
	int x; // ���� ���������
	int y;
};

/* ���������, ��� � ������ ���������, ����� ���������� � �������: */
void print_point(Point p)
{
	printf("x: %d, y: %d\n", p.x, p.y);
}

// ������ ������ - ��������� �������
struct Abonent
{
	char name[25];
	char phone[25];
	char email[25];
};

int _tmain(int argc, _TCHAR* argv[])
{
    // ����� ���������� ����������������� ���� ������ - 
    // �� ����� ������� ����������:
	Point p1, p2, p3;
	p1.x = 10; // ������ � ����� ��������� �������������� ����� �����
	p1.y = 20;
	
	p2.x = 100;
	p2.y = 50;
	print_point(p1); // �������� ��������� � �������
	print_point(p2);
    
    // ������ �������� ������� ��������
	Abonent phone_book[100];
	char buff[256];
	printf("Name: ");
	fgets(buff, 255, stdin);
	strcpy(phone_book[0].name, buff); // �������, ������� �������� ������ �� buff � ���� name ��������� Abonent
	printf("Pone: ");
	fgets(buff, 255, stdin);
	strcpy(phone_book[0].phone, buff);
	printf("Email: ");
	fgets(buff, 255, stdin);
	strcpy(phone_book[0].email, buff);

	//system("pause");
	return 0;
}

