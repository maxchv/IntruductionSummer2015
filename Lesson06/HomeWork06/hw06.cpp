#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#pragma warning(disable: 4996)

/*
������� 1.
����������� ��������� ������ ���� ��������� ���������� �����, ������� ���������
��������� :

1. Show all contacts
2. Add contact
3. Delete contact
4. Search contact
5. Exit

����� ������ ���� �������������� ����� �������� ��� ������.
��� ������ ��������� �������������� ������(switch) ������� �������������� ���������.

���� ������������ ���� �������������� ����� ����(������ 5 � ������ 1), �� ���������
��������� � ���, ��� ���� �� ���������� � ������������ ��������� ����.
*/
void task01()
{
    int num;
    printf("This is menu your contact list, select the item number:\n1. Show all contacts\n2. Add contact\n3. Delete contact\n4. Search contact\n5. Exit\n");

    do 
    {
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("1. Show all contacts\n");
            break;
        case 2:
            printf("2. Add contact\n");
            break;
        case 3:
            printf("3. Delete contact\n");
            break;
        case 4:
            printf("4. Search contact\n");
            break;
        case 5:
            printf("5. Exit\n");
            break;

        default: 
            printf("I don't understand your choice, please try again %d\n", num);
            break;
        }
    } while(num !=5);
}

/*
������� 2.
������� ������� ��� ����������:
- ����� ���� ����� �����
- �������� ���� ����� �����
- ������������ ���� ����� �����
- ���������� �������� ���� �����

������������ ��� ������� � ���������� ������������.
*/
int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b; 
}
float _div(int a, int b)
{
    return (float)a / b;
}
int mult(int a, int b)
{
    return a * b;
}
void tast02()
{
    int a, b;
    char op;

    do
    {
        printf("Type qeuation: ");
        scanf("%d%c%d", &a, &op, &b);

        switch (op)
        {
        case '+':
            printf("res: %d\n", sum(a, b));
            break;
        case '-':
            printf("res: %d\n", sub(a, b));
            break;
        case '*':
            printf("res: %d\n", mult(a, b));
            break;
        case '/':
            printf("res: %f\n", _div(a, b));
            break;
        case 'q':
            printf("Exit\n");
            break;

        default: printf("I didn't understend operator %c\n", op);
        }
    } while (op != 'q');
}

/*
������� 3.
�������� ��������� ���������� 300$ + ������� �� ������, ������� �� 1000 � 5 % ,
����� 1000 � 8 % .������������ ������ � ���������� ������� ������ ��� ���� ����������.
���������� �� ��������, ���������� ������� ���������, ��������� ��� ������ 200$,
������� ����� �� �����.� �������� ��������� ��������� ������������ ��������� ��������(? : )
*/
void tast03()
{
    float SM1, SM2, p5 = 0.05, p8 = 0.08, ZP1 = 300, ZP2 = 300, BM;

	printf("������ ������� ������� ���������: ");
	scanf("%g", &SM1);

	printf("������ ������� ������� ���������: ");
	scanf("%g", &SM2);

	printf("\n");

	ZP1 += (SM1 <= 1000) ? SM1 * p5 : SM1 * p8;
	
	printf("�������� ������� ��������� = %g $\n", ZP1);

	ZP2 += (SM2 <= 1000) ? SM2 * p5 : SM2 * p8;
	
	printf("�������� ������� ��������� = %g $\n", ZP2);
	
	printf("\n");

	(ZP1 > ZP2) ? printf("������ �������� The Best = %g $\n", ZP1 + 200):
				  printf("������ �������� The Best = %g $\n", ZP2 + 200);
}

void main()
{
    setlocale(LC_ALL, "russian");
    task01();
    tast02();
    tast03();
    system("pause");
}