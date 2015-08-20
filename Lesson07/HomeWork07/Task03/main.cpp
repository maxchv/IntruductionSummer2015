#include <stdio.h>
#include <stdlib.h>

/*
    ������� 2. 
	    �������� ������� �������� �������� ������� � �������
	    ����������.
	    ��� �������� ������������ ���������: F = 9/5*t + 32,
	    ��� t - ����������� � �������� �������, 
	        F - ����������� � �������� ����������.
*/
float to_farenheit(float c)
{
	return 9.0f/5.0f*c+32.0f;
}

void cel2far(float cel[], float far[], int size)
{
	for(int i=0; i<size; i++)
	{
		far[i] = to_farenheit(cel[i]);
	}
}

/*
    ������� 3.
	    ������� ��� ������� ������������ 100 ��������� ������.
	    ������ ������ ��������� ������� �� ������� �� 1 �� 100.
	    ������ ������ ��������� ����������, ����������� 
	    �� �������, ������������� � ������� 2.
	    ����� ������� ������ ������ ������������ ����� ������
	    ����������� � �������� �������, ������ - � �������� 
	    ����������.
	    ������� � ������� ������������ ���������� ������� � ����������.
*/

#define N 100
void init_array(float arr[], int size)
{
	for(int i=0; i<size; i++) 
	{
		arr[i] = i;
	}
}

void print_arrays(float arr1[], float arr2[], int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%f\t%f\n", arr1[i], arr2[i]);
	}
}

int main()
{
	float cel[N], far[N];
	init_array(cel, N);
	cel2far(cel, far, N);
	print_arrays(cel, far, N);

	system("pause");
	return 0;
}