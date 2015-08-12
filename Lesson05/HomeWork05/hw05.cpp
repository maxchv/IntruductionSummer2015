#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
#define N 10

int main()
{
	/*
	Задание 1.
		Написать программу для вывода таблицы умножения 10х10 в консоль.
		Использовать цикл for
	*/
	printf("Task #01\n\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%4d ", (i + 1)*(j + 1));
			if (j != N - 1)
			{
				printf("| ");
			}
		}
		printf("\n");
		for (int k = 0; k < N; k++)
		{
			printf("-------");
		}
		printf("\n");
	}

	/*
	Задание 2.
		Напишите оператор for, while и do..while для посчета суммы чисел
		от 1 до 100 с шагом 3
	*/
	printf("\n\nTask #02\n\n");
	int sum = 0;// инициализация переменной, в которой накапливается сумма
	for (int i = 1; i <= 100; i += 3)
	{
		sum += i;
	}
	printf("sum: %d\n", sum);

	sum = 0;
	int i = 1;
	while (i <= 100)
	{
		sum += i;
		i += 3;
	}
	printf("sum: %d\n", sum);

	sum = 0;
	i = 1;
	do{
		sum += i;
		i += 3;
	}while(i <= 100);
	printf("sum: %d\n", sum);	

	/*Задание 3.
		Найдите и исправте ошибки в следующем фрагменте кода :

		record = 0;
		while (record < 100)
		{
		printf("\nRecord %d , record)
	}*/
	printf("\n\nTask #03\n\n");
	int record = 0;
	while (record < 100)
	{
		printf("\nRecord %d" , record);
		record += 1;
	}

	/*
	Задание 4 (Дополнительное).
		Написать программу, которая выводит на экран - следующую фигуру :

		*********************
		*                   *
		*                   *
		*                   *
		*                   *
		*                   *
		*                   *
		*********************

		ширина и высота фигуры задаются пользователем с клавиатуры
	*/
	printf("\n\nTask #04\n\n");
	printf("Type symbol rows and cols: ");
	int rows, cols;
	char sym;
	scanf("%c%d%d", &sym, &rows, &cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == 0 || i == (rows - 1) || j == 0 || j == (cols - 1))
			{
				printf("%c", sym);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
}