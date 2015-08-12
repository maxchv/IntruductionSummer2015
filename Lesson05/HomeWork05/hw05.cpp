#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
#define N 10

int main()
{
	/*
	������� 1.
		�������� ��������� ��� ������ ������� ��������� 10�10 � �������.
		������������ ���� for
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
	������� 2.
		�������� �������� for, while � do..while ��� ������� ����� �����
		�� 1 �� 100 � ����� 3
	*/
	printf("\n\nTask #02\n\n");
	int sum = 0;// ������������� ����������, � ������� ������������� �����
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

	/*������� 3.
		������� � �������� ������ � ��������� ��������� ���� :

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
	������� 4 (��������������).
		�������� ���������, ������� ������� �� ����� - ��������� ������ :

		*********************
		*                   *
		*                   *
		*                   *
		*                   *
		*                   *
		*                   *
		*********************

		������ � ������ ������ �������� ������������� � ����������
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