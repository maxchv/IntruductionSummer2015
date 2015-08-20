/*
    ����:   Introduction
    ������� #9
    ����:   �������� � ��������� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ��������� ��������������� �������
#define TRUE 1
#define FALSE 0

// �������� ������� f. ���������� ��������� ����� ������� main
int f(int *a);

// ������� ������� ����������� ��������� ����  ax2 + bx + c = 0,
// �����������: http://ru.onlinemschool.com/math/library/equation_quadratic/
int  quad_eq(int a, int b, int c, float *x1, float *x2)
{
	int D = b*b - 4*a*c; // ���������� �������������
	if(D >= 0) // ������� ����� ���� ������� � �������������� �������
	{
		*x1 = (-b + sqrt((float)D))/(2*a); // ������ ������ ���������
		*x2 = (-b - sqrt((float)D))/(2*a); // ������ ������ ���������
        return TRUE; // ������� �������
	}
	else 
	{
		printf("I didn't solve equation\n");
		return FALSE; // ������� �� ���� �������
	}
}

int main()
{

	int a = 0;
	printf("before f(a) a: %d\n", a);
	printf("adress: %ld\n", &a);
	f(&a); // �������� ����� ���������� �
	printf("after f(a) a: %d\n", a);

    float x1, x2;
	float *res1 = &x1, // �������� ��������� res1 � ����������� ��� ����� ���������� x1
          *res2 = &x2;
    int a = 1, b = 5, c = 2;
	if(quad_eq(a, b, c, res1, res2)) // ���� ������� ����, �� ������� ���
	{
        // �� ������ �� ��, ��� � ������� quad_eq ���� �������� ���������, ��������
        // ���������� x1 � x2 ���� ��������!
		printf("x1 = %g, x2 = %g\n", x1, x2);
	}

	system("pause");
	return 0;
}

// ���������� ������� f
int f(int *a) // �������� ������ �� ��������� - ����� �������� � ������� �������� ��� ����������, �� ������� ��������� ���������
{
	printf("addr: %ld\n", a);
	*a = 10;
	printf("inside f(a) a: %d\n", *a);

	return 0;
}