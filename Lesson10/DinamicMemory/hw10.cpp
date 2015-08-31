/*
    Домашнее задание
    
    Курс:   Introduction
    Занятие #10
    Тема:   Адресная арифметика, Динамическое выделение памяти, 
            указатели на функции, сортировка пузырьком    
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 4996)

/*
    Вспомогательная функция вывода массива на экран
*/
void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
    Задание 1.
    Запросить у пользователья через scanf размер массива.
    Создать целочисленный массив указанного размера (используя функцию malloc).
    Заполнить массив данными пользователя (через scanf)
    Вывести полученный массив на экран

    Примечание: не забывайте очистить память выделенную для массива
*/
void task01()
{
    // Ваше решение
    printf("Type size of array: ");
    int size;
    scanf("%d", &size);
    int *arr = (int *)malloc(sizeof(int)*size);
    for(int i=0; i<size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    print_array(arr, size);
}

void bubble_sort(int arr[], int size) 
{ // ф-ция сортировки пузырьком
    int tmp;
    for(int i=0; i<size - 1; i++)	
    {
        for(int j=0; j<size - i - 1; j++) 
        {
            if(arr[j] > arr[j+1]) 
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

/*
    Задание 2.
    Создать массив размером 20 элементов.
    Заполнить массив случайными числами в диапазоне от 1 до 100.
    Отсортировать массив в порядке возрастания
*/
void task02()
{
    // Ваше решение
    const int n = 20;
    int arr[n];
    // заполнение массива случайными числами
    
    for(int i=0; i<n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    // Сортируем
    bubble_sort(arr, n);
    print_array(arr, n);
}

/*
    Задание 3.
    Создать массив размером 10 элементов.
    Заполнить массив случайными числами в диапазоне от 1 до 10.
    Найти повторяющиеся элементы и вывести на экран только те
    элементы, которые повторяются более двух раз, например для массива
    
    [1, 2, 1, 5, 6, 1, 2, 7, 8, 9, 4]

    Результат должен быть таким:

    1: 3
    2: 2

    т.к. единица повторяется три раза, двойка - два
*/
void task03()
{
    // Ваше решение
    const int n = 10;
    int arr[n];
    // заполнение массива случайными числами
    
    for(int i=0; i<n; i++)
    {
        arr[i] = rand() % 10 + 1;
    }

    int *dubl = (int *)calloc(n, sizeof(int));
    for(int i=0; i<n; i++)
    {
        dubl[arr[i] - 1]++;
    }
    print_array(arr, n);
    for(int i=0; i<n; i++)
    {
        if(dubl[i] > 1)
        {
            printf("Number %d repeat %d times\n", i + 1, dubl[i]);
        }
    }

    free (dubl);
}

int main()
{    
    srand(time(NULL));
    task01();
    task02();
    task03();

    system("pause");
    return 0;
}