#include <stdio.h>
#include <stdlib.h>

/*
    Задание 2. 
	    Написать функцию перевода градусов Цельсия в градусы
	    Фаренгейта.
	    Для перевода использовать уравнение: F = 9/5*t + 32,
	    где t - температура в градусах Цельсия, 
	        F - температура в градусах Фаренгейта.
*/
float to_farenheit(float c)
{
	return 9.0f/5.0f*c+32.0f;
}

void cel2far(float cel[], float far[], int size)
{
	for(int i=0; i<size; i++)
	{
		far[i] = to_farenheit(cel[i]);
	}
}

/*
    Задание 3.
	    Создать два массива размерностью 100 элементов каждый.
	    Первый массив заполнить числами по порядку от 1 до 100.
	    Второй массив заполнить значениями, полученными 
	    от функции, реализованной в задании 2.
	    Таким образом первый массив представляет собой массив
	    температуры в градусах Цельсия, второй - в градусах 
	    Фаренгейта.
	    Вывести в консоль соответствие температур Цельсия и Фаренгейта.
*/

#define N 100
void init_array(float arr[], int size)
{
	for(int i=0; i<size; i++) 
	{
		arr[i] = i;
	}
}

void print_arrays(float arr1[], float arr2[], int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%f\t%f\n", arr1[i], arr2[i]);
	}
}

int main()
{
	float cel[N], far[N];
	init_array(cel, N);
	cel2far(cel, far, N);
	print_arrays(cel, far, N);

	system("pause");
	return 0;
}