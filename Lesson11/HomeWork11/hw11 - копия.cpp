#include <stdlib.h>
#include <stdio.h>
#pragma warning(disable: 4996)

// Факториал числа
int factorial(int n)
{	
	return n == 0 ? 1 : n * factorial(n - 1);
}

/*
Задание 1.
В С нет функции вычисления факториала числа.
Факториалом называется произведение всех натуральных
чисел от 1 до n включительно
Подробности: https://ru.wikipedia.org/wiki/%D0%A4%D0%B0%D0%BA%D1%82%D0%BE%D1%80%D0%B8%D0%B0%D0%BB
Реализовать фунцию factorial выполняющую вычисление
факториала через рекурсию
*/
void task01()
{
	printf("Task #01\n");
	printf("%d\n", factorial(5));
	// Проверка функции факториал
	// Не удаляйте код приведеннный ниже
	// Если после успешной компиляции и запуска
	// программы вы увидели строки начинающиеся с Error
	// значит в функции factorial допущены ошибки
	if (factorial(0) != 1)
	{
		fprintf(stderr, "Error: 0!\n");
	}
	if (factorial(1) != 1)
	{
		fprintf(stderr, "Error: 1!\n");
	}
	if (factorial(3) != 6)
	{
		fprintf(stderr, "Error: 3!\n");
	}
	if (factorial(5) != 120)
	{
		fprintf(stderr, "Error: 5!\n");
	}

	printf("\n\n");
}

/*
Задание 2.
Создать двумерный целочисленный массив
размером 8 х 8 элементов.
Заполнить массив а-ля шахматная доска, т.е.
белая клеточка - 0, черная клеточка - 1.
Вывести массив на экран
*/
void task02()
{
	printf("Task #02\n");
	
	int **arr2d = (int **)malloc(sizeof(int *) * 8);	
	for (int i = 0; i<8; i++)
	{
		arr2d[i] = (int *)malloc(sizeof(int) * 8);
	}
    // заполнение массива
	for (int i = 0; i<8; i++)
	{
		for (int j = 0; j<8; j++)
		{
            if((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
			    arr2d[i][j] = 1;
            else
                arr2d[i][j] = 0;
		}
	}
	// вывод "шахматной доски"
	for (int i = 0; i <8; i++)
	{
		for (int j = 0; j<8; j++)
			if (arr2d[i][j])
				printf("%c", 219);
			else
				printf(" ");
		printf("\n");
	}
    // очистка памяти
	for (int i = 0; i<8; i++)
	{
		free(arr2d[i]);
	}
	free(arr2d);

	printf("\n\n");
}

int value_card(int idx)
{
	int num = idx % 9;
	if(num < 5)
	{
		return num + 6;
	}
	else if(num < 8)
	{
		return num - 3;
	}
	else
	{
		return 11;
	}	
}

void task03()
{
	printf("Task #03\n");

	char cards[36][4];
	for(int m=3; m<7; m++)
	{
		for(int i=0; i<9; i++)
		{
			int idx = (m-3)*9 + i;
			cards[idx][0] = m;

			if(i < 4) {
				cards[idx][1] = '6' + i;
				cards[idx][2] = '\0';
			}
			if(i == 4) { // 10
				cards[idx][1] = '1';
				cards[idx][2] = '0';
				cards[idx][3] = '\0';
			}
			if(i == 5) { // В
				cards[idx][1] = 130;
				cards[idx][2] = '\0';
			}
			if(i == 6) { // Д
				cards[idx][1] = 132;
				cards[idx][2] = '\0';
			}
			if(i == 7) { // К
				cards[idx][1] = 138;
				cards[idx][2] = '\0';
			}
			if(i == 8) {  // Т
				cards[idx][1] = 146;
				cards[idx][2] = '\0';
			}
		}
	}
	for(int i=0; i<36; i++)
	{		
		printf("%d: %s %d\n", i, cards[i], value_card(i));
	}	
}



int main()
{
	task01();
	task02();
	task03();

    system("pause");
	return 0;
}

