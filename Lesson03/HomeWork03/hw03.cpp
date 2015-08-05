#include <stdio.h>
#include <stdlib.h> // ��� ������� system
#include <time.h>   // ��� ������ � ��������� �������
#pragma warning(disable: 4996)

void main()
{
	srand(time(NULL));
	int num = rand() % 10 + 1; // ���������� "���������" ����� � ��������� �� 1 �� 10

	/*������� 1
		���������� ��������� � ������� ������������ ������������ ������� "����������" ����������� �����.
		������� ���������������� ��������� ������ :
		-���� ����� ������� - ������� ��������� : You are lucky
		- ���� ����� ������ �����������, �� ������� �������� : Number less
		- ���� ����� ������ �����������, �� ������� �������� : Number greater*/
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
	else // ������ ��� ��������� ��������, ������� else if(...) ����� �������� ������� else
	{
		printf("Number greater");
	}

	/*2. �������� ��������� ���������� 200$ + ������� �� ������, ������� �� 500$ - 3 % , �� 500 �� 1000 � 5 % ,
		����� 1000 � 8 %. ������������ ������ � ���������� ������� ������ ��� ���� ����������.
		���������� �� ��������, ���������� ������� ���������, ��������� ��� ������ 200$, ������� ����� �� �����.*/
	printf("\n\nTask #2\n");
	float sold1, sold2, sold3;
	printf("Type how much did the three managers sold: ");
	scanf("%f%f%f", &sold1, &sold2, &sold3);
	float salary1 = 200, salary2 = 200, salary3 = 200; // "�����" �������� $200
	// ��������� "������" �� �������
	// ������ ��������
	if (sold1 < 500)
	{
		salary1 = salary1 + sold1 * 0.03;
	}
	else if (sold1 < 1000)
	{
		salary1 = salary1 + sold1 * 0.05;
	}
	else // ������� �� ����
	{
		salary1 = salary1 + sold1 * 0.08;
	}

	// ������ ��������
	if (sold2 < 500)
	{
		salary2 = salary2 + sold2 * 0.03;
	}
	else if (sold2 < 1000)
	{
		salary2 = salary2 + sold2 * 0.05;
	}
	else // ������� �� ����
	{
		salary2 = salary2 + sold2 * 0.08;
	}

	//	������ ��������
	if (sold3 < 500)
	{
		salary3 = salary3 + sold3 * 0.03;
	}
	else if (sold3 < 1000)
	{
		salary3 = salary3 + sold3 * 0.05;
	}
	else // ������� �� ����
	{
		salary3 = salary3 + sold3 * 0.08;
	}

	// ���������� ������� ���������
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


	/*3. �������� ������� ����������� � �������.����������� �������� + - * / .
		������������ ������ ������ � ���� :
	����� _������_ �������� _�������_ �����
	�������� :
	5 + 5

	��������� :
			  ���������� ������ ����� scanf � �������� "%d%c%d"
			  �������� ������� � ���������� ���� char
			  ��������� �������� ����� ��������, �������� ��� : op == '+'
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

	/*4. �������������� �������.������������ ������ � ���������� ����� ������������ �����.
	   �������� ���������, ������� ����������, �������� �� ��������� ����� � ����������
	  (���������� ��������� ������������ �����, � �������� ����� ������ 3 ���� ����� ����� ������ ���� ����).
	  ���� ������������ ���� �� ������������ ����� � ��������� �� ������.*/
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
		n1 = happy / 100000;							// ��� ������������� ������� �������� ������ �����
		n2 = (happy - n1*100000) / 10000;				// �������� ������ �����
		n3 = (happy - n1 * 100000 - n2 * 10000) / 1000;	// �������� ������ �����
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




