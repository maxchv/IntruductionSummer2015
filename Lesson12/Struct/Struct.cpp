/*
     урс:   Introduction
    «ан€тие #12
    “ема:   —труктуры данных
*/
#include "stdafx.h"
#pragma warning(disable: 4996)

/* —труктура Ч это пользовательский тип данных, котора€ представл€ет собой
    некое объединение различных переменных 
   (даже с разными типами данных), которому можно присвоить им€.

   ¬ажно подчеркнуть структура - тип данных, который создаете вы дл€ своих нужд.
   ѕример: создадим струтктуру точка на плоскости
*/
struct Point
{
	int x; // пол€ структуры
	int y;
};

/* структуру, как и другие переменые, можно передавать в функции: */
void print_point(Point p)
{
	printf("x: %d, y: %d\n", p.x, p.y);
}

// ƒругой пример - структура абонент
struct Abonent
{
	char name[25];
	char phone[25];
	char email[25];
};

int _tmain(int argc, _TCHAR* argv[])
{
    // ѕосле объ€влени€ пользовательского типа данных - 
    // мы можем создать переменные:
	Point p1, p2, p3;
	p1.x = 10; // доступ к пол€м структуры осуществл€етс€ через точку
	p1.y = 20;
	
	p2.x = 100;
	p2.y = 50;
	print_point(p1); // передача структуры в функцию
	print_point(p2);
    
    // пример создани€ массива структур
	Abonent phone_book[100];
	char buff[256];
	printf("Name: ");
	fgets(buff, 255, stdin);
	strcpy(phone_book[0].name, buff); // функци€, котора€ копирует строку из buff в поле name структуры Abonent
	printf("Pone: ");
	fgets(buff, 255, stdin);
	strcpy(phone_book[0].phone, buff);
	printf("Email: ");
	fgets(buff, 255, stdin);
	strcpy(phone_book[0].email, buff);

	//system("pause");
	return 0;
}

