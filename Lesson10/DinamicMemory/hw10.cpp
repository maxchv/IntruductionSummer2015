/*
    �������� �������
    
    ����:   Introduction
    ������� #10
    ����:   �������� ����������, ������������ ��������� ������, 
            ��������� �� �������, ���������� ���������    
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 4996)

/*
    ��������������� ������� ������ ������� �� �����
*/
void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
    ������� 1.
    ��������� � ������������� ����� scanf ������ �������.
    ������� ������������� ������ ���������� ������� (��������� ������� malloc).
    ��������� ������ ������� ������������ (����� scanf)
    ������� ���������� ������ �� �����

    ����������: �� ��������� �������� ������ ���������� ��� �������
*/
void task01()
{
    // ���� �������
    printf("Type size of array: ");
    int size;
    scanf("%d", &size);
    int *arr = (int *)malloc(sizeof(int)*size);
    for(int i=0; i<size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    print_array(arr, size);
}

void bubble_sort(int arr[], int size) 
{ // �-��� ���������� ���������
    int tmp;
    for(int i=0; i<size - 1; i++)	
    {
        for(int j=0; j<size - i - 1; j++) 
        {
            if(arr[j] > arr[j+1]) 
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

/*
    ������� 2.
    ������� ������ �������� 20 ���������.
    ��������� ������ ���������� ������� � ��������� �� 1 �� 100.
    ������������� ������ � ������� �����������
*/
void task02()
{
    // ���� �������
    const int n = 20;
    int arr[n];
    // ���������� ������� ���������� �������
    
    for(int i=0; i<n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    // ���������
    bubble_sort(arr, n);
    print_array(arr, n);
}

/*
    ������� 3.
    ������� ������ �������� 10 ���������.
    ��������� ������ ���������� ������� � ��������� �� 1 �� 10.
    ����� ������������� �������� � ������� �� ����� ������ ��
    ��������, ������� ����������� ����� ���� ���, �������� ��� �������
    
    [1, 2, 1, 5, 6, 1, 2, 7, 8, 9, 4]

    ��������� ������ ���� �����:

    1: 3
    2: 2

    �.�. ������� ����������� ��� ����, ������ - ���
*/
void task03()
{
    // ���� �������
    const int n = 10;
    int arr[n];
    // ���������� ������� ���������� �������
    
    for(int i=0; i<n; i++)
    {
        arr[i] = rand() % 10 + 1;
    }

    int *dubl = (int *)calloc(n, sizeof(int));
    for(int i=0; i<n; i++)
    {
        dubl[arr[i] - 1]++;
    }
    print_array(arr, n);
    for(int i=0; i<n; i++)
    {
        if(dubl[i] > 1)
        {
            printf("Number %d repeat %d times\n", i + 1, dubl[i]);
        }
    }

    free (dubl);
}

int main()
{    
    srand(time(NULL));
    task01();
    task02();
    task03();

    system("pause");
    return 0;
}