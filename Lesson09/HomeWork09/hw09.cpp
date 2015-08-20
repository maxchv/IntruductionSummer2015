#include <stdio.h>
#include <stdlib.h>

void swap_num(int *a, int *b)
{
    // ����� ����� ���� ���������� ������� swap_num
}

/*
    ������� 1.
    ����������� ������� swap_num ��� ������ ���������� ���� ����������,
    ������:
        int a = 5, b = 10;
        swap_num(&a, &b);
        printf("a: %d, b: %d\n", a, b); 
    �����:
        a: 10, b: 5
*/
void task01()
{
    int a = 10, b = 20;
    swap_num(&a, &b);
    if(a != 20 || b != 10)
    {
        fprintf(stderr, "Error: task#01 does not complete properly\n");
    }
    else
    {
        printf("Task 01 passed\n");
    }
}
/*
    ������� 2.
    � ����������� ���� ���� ���������� ������. ����� � ��������� ������.
*/
void task02()
{
    int x, *p;
    x = 10;
    p = x;
    printf ("x: %d\n", p); // ������� �������� ��������� x ����� ��������� p
    if(*p != 10)
    {
        fprintf(stderr, "Error: task #02 does not complete properly\n");
    }
    else
    {
        printf("Task 02 passed\n");
    }
}

/*
    ������� 3.
    �������� ������������� ������ �������� 10 ���������.
    �������� ����� ������� � ���������� �������� �������.
    ��������� ��� ����� � ����������.
    ������� �� ��������� �� ��������� ������� ������� ����� 
    ������� �������� �������. ������� �� ����� ���������.
    
    ��������� �� ���������, ���� ������ ������� �������� �� 5, 15, 20?
    ���� �� �����-���� ��������������?
*/
void task03()
{
    
}

int main()
{
    task01();
    task02();
    task03();

    system("pause");
    return 0;
}