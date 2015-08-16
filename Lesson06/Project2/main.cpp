/*
    Курс:   Introduction
    Занятие #6
    Тема:   Switch, тернарный оператор, введение в функции
*/
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

// Функция add возвращает сумму двух целых чисел
int add(int a, int b) // a и b - аргументы
{
	printf("I will return sum %d and %d\n", a, b);
	return a + b;
}

void main()
{
    // Пример калькулятора в консоли с применением оператора switch
	int a, b; // объявление двух целочисленных переменных
	char op;  // объявление символьной переменной

	printf("Type equation: ");
	scanf("%d%c%d", &a, &op, &b);

    // Применение оператора switch для принятия решения
	switch (op) 
	{
	case '+':
		printf("res: %d\n", a + b);
		break; // обязательно!!!
	case '-':
		printf("res: %d\n", a - b);
		break;
	case '*':
	case '&':
		printf("res: %d\n", a * b);
		break;
	case '/':
	case '$':
		printf("res: %f\n", (float)a / b);
		break;
	default:
		printf("I didn't understend operator %c\n", op);
		break;
	}
    // то же саомое, но с применением if .. else if .. else
	/*if(op == '+') {
	printf("res: %d\n", a + b);
	} else if(op == '-') {
	printf("res: %d\n", a - b);
	} else if(op == '*') {
	printf("res: %d\n", a * b);
	} else if(op == '/') {
	printf("res: %f\n", (float)a / b);
	} else {
	printf("I didn't understend operator %c\n", op);
	}*/

    // Тернарный оператор имеет синтаксис:
    // <переменная> = (<условие>) ? <результат при выполнении условия> : <результат в случае, если условие ложно>;
	// Пример применения тернраного оператора:
    // Нобходимо получить модуль (абсолютное значение) числа
    int num = -10; // объявляем переменную и инициализируем отрицательным числом
    // Данную задачу можно решить с помощью операторов if .. else:
	//if(num < 0)
	//{
	//	num = -num; // num *= -1;
	//}
	//else
	//{
	//	num = num;
	//}

    // но, с применением тернарного запись становиться компактнее
	num = (num < 0) ? -num  : num;

	num = add(10, 20); // вызов функции add и присвоение резульата переменной num
	printf("num = %d\n", num);
   
	system("pause");
}