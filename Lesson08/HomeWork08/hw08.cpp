#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

/*
    Функция поиска максимального значения в массиве arr размером size
*/
int max_arr(int arr[], int size)
{
	int max = arr[0];	

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

/*
    Функция поиска минимального значения в массиве arr размером size
*/
int min_arr(int arr[], int size)
{
	int min = arr[0];	

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

/*Задание 1.
Создать целочисленный массив размером 9 элементов предназначенный
для хранения возвраста студентов.
Заполнить массив с клавиатуры.
Вывести на экран самого старшего и самого младшего студента группы.
*/
void task01()
{
	int i = 0;
    const int n_students = 9;
    int age_stud[n_students];

	printf("Type age for %d studnets\n", n_students);
	for(int i=0; i<n_students; i++)
	{
		printf("Age %d student: ", i);
		scanf("%d", &age_stud[i]);
	}

	printf("Most old student: %d\n", max_arr(age_stud, n_students));

	printf("Most yanger student: %d\n", min_arr(age_stud, n_students));
}

/*Задание 2.
Объявить целочисленный массив размером 10 элементов и инициализировать его
значениями 0, -1, 1, 2, 3. Чему будет равна сумма элементов этого массива?
*/
void task02()
{
	int arr[10] = {0, -1, 1, 2, 3};
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	printf("sum: %d\n", sum);
}

void print_arr(int arr[], int size)
{
    for(int i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
/*Задание 3.
Обявить целочисленный массив размером 20 элементов. В цикле инициализировать
элементы этого массива значениями начиная с 20 до 1, с шагом 1.
*/
void task03()
{
    const int count = 20;
	int arr[count];

	/*for (int i = count; i >= 0; i--)
	{
		arr[count-i] = i;		
	}*/
    // Другой вариант инициализации
	int n=count+1;
	while(--n)
	{
		arr[count-n] = n;
	}
    print_arr(arr, count);
}

/*
    Функия проверяет явлется ли строка str размером n палиндромом
*/
int is_palindrom(char str[], int n)
{
	int palindrom = 1;
	for(int i=0; i < n/2; i++)
	{
		if(str[i] != str[n-i-1])
		{
			palindrom = 0;
			break;
		}
	}
	return palindrom;
}

/*Задание 4. (Дополнительное)
Обявить массив символов размерностью 20 элементов. Используя функцию gets
(пример применения приведен в материалах к занятию) считать слово введенное
пользователем. Проверить является ли введенное слово палиндромом т.е.
словом, которое одинаково читаются слева направо и справа налево, или нет.
Например, слово ТОР не является палиндромом, а слово МАДАМ - является.
*/
void task04()
{
	char word[20];
	printf("Type wrod: ");
	gets(word); //fgets(word, 19, stdin);
	printf("Your word %s\n", word);
	int n = strlen(word);	

	if(is_palindrom(word, n))
	{
		printf("Word %s IS palindrom\n", word);
	}
	else
	{
		printf("Word %s is NOT palindrom\n", word);
	}

}

int main()
{
	task01();
	task02();
	task03();
	task04();

	system("pause");
	return 0;
}