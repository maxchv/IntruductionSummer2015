#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

void main()
{
    /*
    1. �������� ����������� � ������, ������� ��������� ���������� �� ��� ���, ����
    � �������� �������� �� ����� ������ ������ q.
    ������ ������ � ����� �������������: 

    Hello. It is simple calculator. Type your equation after eq:
    eq: 2 + 2 
    4
    eq: 2 * 4
    8
    eq: 5 / 2
    2.5
    eq: 2 q 2
    Good bay!
    */
    // �� ������ ����� ���, ������������� ��� ���������� �/� �3
    printf("\n\nTask #1\n");
    int a, b;
    char op;
    printf("Type your equation using operators + - * /:\n");
    do{
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
        else if(op == 'q')
        {
            printf("Good bay!\n");
        }
        else
        {
            printf("I didn't understand your operator %c\n. Try again\n", op);
        }
    } while(op != 'q'); // ���� op �� ����� q  ���������� ����

    /*
    2. �������� ��������� � ������� ��������� ������ �������� � 
    ����������� �����. 
    ������ � �� ���������� ������ ������������.
    ������:

    Type symbol and number: - 10   
    ----------
    */
    getchar(); // ���������� ��� ������� ������ �����
    printf("\n\nTask #2\n");
    printf("Type symbol and number of repetitions: ");
    int num;
    char sym;
    scanf("%c %d", &sym, &num);
    for(int i=0; i<num; i++)
    {
        printf("%c", sym);
    }
    printf("\n\n");

    /*
    3. (�������������� �������)
    �������� ��������� � ������� ��������� ������������� ��������. 
    ������ � �� ���������� ����� � ����� ������ ������������.
    ���������: ����� ����� ���� ����������.
    ������:

    Type symbol, rows and cols: * 10 10
    **********
    **********
    **********
    **********
    **********
    **********
    **********
    **********
    **********
    **********
    */
    getchar(); // ���������� ��� ������� ������ �����
    printf("\n\nTask #3\n");
    printf("Type symbol , rows and cols: ");
    int rows, cols;    
    scanf("%c %d %d", &sym, &rows, &cols);
    for(int i=0; i<rows; i++) // ���� �� �������
    {
        for(int j=0; j<cols; j++) // ���� �� ��������
        {
            printf("%c", sym); 
        } 
        printf("\n"); // ����� ������ ������ ��������� ������ �� ��������� ������
    }
    printf("\n\n");

    system("pause");
}