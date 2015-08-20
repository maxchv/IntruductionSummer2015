/*
    Курс:   Introduction
    Занятие #9
    Тема:   Введение в указатели 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// объявляем вспомогательный макросы
#define TRUE 1
#define FALSE 0

// Прототип функции f. Реализация приведена после функции main
int f(int *a);

// Функция решения квадратного урванения вида  ax2 + bx + c = 0,
// Подробности: http://ru.onlinemschool.com/math/library/equation_quadratic/
int  quad_eq(int a, int b, int c, float *x1, float *x2)
{
	int D = b*b - 4*a*c; // Вычисление дискриминанта
	if(D >= 0) // решение может быть найдено в действительной области
	{
		*x1 = (-b + sqrt((float)D))/(2*a); // первый корень уравнения
		*x2 = (-b - sqrt((float)D))/(2*a); // второй корень уравнения
        return TRUE; // решение найдено
	}
	else 
	{
		printf("I didn't solve equation\n");
		return FALSE; // решение не было найдено
	}
}

int main()
{

	int a = 0;
	printf("before f(a) a: %d\n", a);
	printf("adress: %ld\n", &a);
	f(&a); // передаем адрес переменной а
	printf("after f(a) a: %d\n", a);

    float x1, x2;
	float *res1 = &x1, // объявлем указатель res1 и присваеваем ему адрес переменной x1
          *res2 = &x2;
    int a = 1, b = 5, c = 2;
	if(quad_eq(a, b, c, res1, res2)) // если решение есть, то выводим его
	{
        // не смотря на то, что в функцию quad_eq были переданы указатели, значения
        // переменных x1 и x2 были изменены!
		printf("x1 = %g, x2 = %g\n", x1, x2);
	}

	system("pause");
	return 0;
}

// Реализация функции f
int f(int *a) // передача данных по указателю - можем изменить в функции значение той переменной, на которую указывает указатель
{
	printf("addr: %ld\n", a);
	*a = 10;
	printf("inside f(a) a: %d\n", *a);

	return 0;
}