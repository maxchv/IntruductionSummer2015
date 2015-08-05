#include <stdio.h>
#include <stdlib.h> // для функции system
#include <time.h>   // для работы с функциями времени
#pragma warning(disable: 4996)

void main()
{
	srand(time(NULL));
	int num = rand() % 10 + 1; // возвращает "случайное" число в диапазоне от 1 до 10

	/*Задание 1
		Продолжите программу в которой пользователю предлагается угадать "загаданное" компьютером число.
		Следует предусмотротреть следующие случаи :
		-если число угадано - вывести сообщение : You are lucky
		- если число меньше загаданного, то вывести сообщеие : Number less
		- если число больше загаданного, то вывести сообщеие : Number greater*/
	printf("Task #1\n");
	printf("Try guess number [1..10]: ");
	int guess;
	scanf("%d", &guess);
	if (num == guess)
	{
		printf("You are lucky\n");
	}
	else if (guess < num)
	{
		printf("Number less");
	}
	else // только три возможных варианта, поэтому else if(...) можно заменить простым else
	{
		printf("Number greater");
	}

	/*2. Зарплата менеджера составляет 200$ + процент от продаж, продажи до 500$ - 3 % , от 500 до 1000 – 5 % ,
		свыше 1000 – 8 %. Пользователь вводит с клавиатуры уровень продаж для трех менеджеров.
		Определить их зарплату, определить лучшего менеджера, начислить ему премию 200$, вывести итоги на экран.*/
	printf("\n\nTask #2\n");
	float sold1, sold2, sold3;
	printf("Type how much did the three managers sold: ");
	scanf("%f%f%f", &sold1, &sold2, &sold3);
	float salary1 = 200, salary2 = 200, salary3 = 200; // "голая" зарплата $200
	// Начисляем "бонусы" за продажи
	// Первый менеджер
	if (sold1 < 500)
	{
		salary1 = salary1 + sold1 * 0.03;
	}
	else if (sold1 < 1000)
	{
		salary1 = salary1 + sold1 * 0.05;
	}
	else // другого не дано
	{
		salary1 = salary1 + sold1 * 0.08;
	}

	// Второй менеджер
	if (sold2 < 500)
	{
		salary2 = salary2 + sold2 * 0.03;
	}
	else if (sold2 < 1000)
	{
		salary2 = salary2 + sold2 * 0.05;
	}
	else // другого не дано
	{
		salary2 = salary2 + sold2 * 0.08;
	}

	//	Третий менеджер
	if (sold3 < 500)
	{
		salary3 = salary3 + sold3 * 0.03;
	}
	else if (sold3 < 1000)
	{
		salary3 = salary3 + sold3 * 0.05;
	}
	else // другого не дано
	{
		salary3 = salary3 + sold3 * 0.08;
	}

	// Определяем лучшего менеджера
	if (salary1 > salary2 && salary1 > salary3)
	{
		printf("The first manager is the best");
	}
	else if (salary2 > salary1 && salary2 > salary3)
	{
		printf("The second manager is the best");
	}
	else
	{
		printf("The third manager is the best");
	}


	/*3. Написать простой калькулятор в консоли.Реализовать операции + - * / .
		Пользователь вводит данные в виде :
	число _пробел_ операция _проблел_ число
	Например :
	5 + 5

	Подсказка :
			  считывание данных через scanf с форматом "%d%c%d"
			  операцию хранить в переменной типа char
			  считанную операцию можно сравнить, например так : op == '+'
	*/
	printf("\n\nTask #3\n");
	int a, b;
	char op;
	printf("Type your equation using operators + - * /:\n");
	scanf("%d%c%d", &a, &op, &b);
	if (op == '+')
	{
		printf("%d\n", a + b);
	}
	else if (op == '-')
	{
		printf("%d\n", a - b);
	}
	else if (op == '*')
	{
		printf("%d\n", a * b);
	}
	else if (op == '/')
	{
		printf("%f\n", (float)a / b);
	}
	else
	{
		printf("I didn't understand your operator %c", op);
	}

	/*4. Дополнительное задание.Пользователь вводит с клавиатуры целое шестизначное число.
	   Написать программу, которая определяет, является ли введенное число – счастливым
	  (Счастливым считается шестизначное число, у которого сумма первых 3 цифр равна сумме вторых трех цифр).
	  Если пользователь ввел не шестизначное число – сообщение об ошибке.*/
	printf("\n\nTask #4\n");
	int happy;
	printf("Type your number (must contain 6 digits): ");
	scanf("%d", &happy);
	if (happy > 999999 || happy < 100000)
	{
		printf("Error: You had to type the number that contain 6 digits!!!");
	}
	else
	{
		int n1, n2, n3, n4, n5, n6;
		n1 = happy / 100000;							// при целочисленном делении получаем первое число
		n2 = (happy - n1*100000) / 10000;				// получаем второе число
		n3 = (happy - n1 * 100000 - n2 * 10000) / 1000;	// получаем третье число
		n4 = (happy - n1 * 100000 - n2 * 10000 - n3 * 1000) / 100;
		n5 = (happy - n1 * 100000 - n2 * 10000 - n3 * 1000 - n4*100) / 10;
		n6 = (happy - n1 * 100000 - n2 * 10000 - n3 * 1000 - n4 * 100 - n5*10);
		//printf("%d %d %d %d %d %d", n1, n2, n3, n4, n5, n6);
		if ((n1 + n2 + n3) == (n4 + n5 + n6))
		{
			printf("It is happy number!!!");
		}
	}
	system("pause");
}




