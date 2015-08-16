/*
    ����:   Introduction
    ������� #6
    ����:   Switch, ��������� ��������, �������� � �������
*/
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

// ������� add ���������� ����� ���� ����� �����
int add(int a, int b) // a � b - ���������
{
	printf("I will return sum %d and %d\n", a, b);
	return a + b;
}

void main()
{
    // ������ ������������ � ������� � ����������� ��������� switch
	int a, b; // ���������� ���� ������������� ����������
	char op;  // ���������� ���������� ����������

	printf("Type equation: ");
	scanf("%d%c%d", &a, &op, &b);

    // ���������� ��������� switch ��� �������� �������
	switch (op) 
	{
	case '+':
		printf("res: %d\n", a + b);
		break; // �����������!!!
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
    // �� �� ������, �� � ����������� if .. else if .. else
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

    // ��������� �������� ����� ���������:
    // <����������> = (<�������>) ? <��������� ��� ���������� �������> : <��������� � ������, ���� ������� �����>;
	// ������ ���������� ���������� ���������:
    // ��������� �������� ������ (���������� ��������) �����
    int num = -10; // ��������� ���������� � �������������� ������������� ������
    // ������ ������ ����� ������ � ������� ���������� if .. else:
	//if(num < 0)
	//{
	//	num = -num; // num *= -1;
	//}
	//else
	//{
	//	num = num;
	//}

    // ��, � ����������� ���������� ������ ����������� ����������
	num = (num < 0) ? -num  : num;

	num = add(10, 20); // ����� ������� add � ���������� ��������� ���������� num
	printf("num = %d\n", num);
   
	system("pause");
}