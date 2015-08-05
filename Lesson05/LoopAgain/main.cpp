/*
	����:   Introduction
	������� #5
	����:   ����� while, do .. while, for, ��������� break � continue
*/
#include <stdio.h>

void main()
{
	// � ������ ������� ������������ ������ ������ �� ��� ���,
	// ���� �� ����� ������ ������ 'q'
	char ch = 'a';		// ���������� ������������� ��� ����� � ���� while
	while (ch != 'q')	// ���� �������� ���������� ch �� ����� 'q' ��������� ����
	{
		ch = getchar(); // ������� getchar() ���������� ������ �� ������������ ������ ����� 
	}

	// ��� �� ����� ������, �� ������ ��� ����� do .. while
	ch = 'q'; // ������������� ���������� ��� ������� ����� ��������
	do
	{
		ch = getchar();
	} while (ch != 'q');
	
	// ������: ����� ������ ������� '*' ����� ���� while
	int i=0; // ����������, ������� ������ ���� �������� � �����
	while(1) // ����������� ���� � ������� �.�. ���, ��� �� ���� - ������ (true)
	{
		printf("*");
		if(i > 10)
		{
			break; // ���������� ���������� �����
		}
		i = i + 1; // ��������� - ������������ ������� ��� "���������" �����
	}

	// ������: ����� ���� ������ ����� � ��������� [0 .. 20)
	while(i < 20) 
	{
		if(i%2 != 0) // ���� �������� �����
		{
			i = i + 1; 
			continue; // ���������� ������� �������� � �������� ���������� �� ������ �����
		}
		printf("%d ", i);
		i = i + 1;
	}

	// ���� for 
	// ������ ������ ������������������ �����:
	// 5 6 7 8 9 10 11 12 13 14 15 17 18 19
	for (int i = 5; // << ������������� "��������"
		    i < 20; // << ������� ������ �� �����
		 i = i + 1) // << ���������� "��������"
	{		
		printf("%d ", i);
		if(i == 15)
		{
			i = 17;
		}
	}

	// ����� ����� ���� ����������.
	// ������ ������ �������������� ���������� �� 5 ����� ������� 10 �������� ������
	for (int i = 0; i < 5; i++) // ���� �� �������
	{ 
		for (int j = 0; j < 10; j++) // ���� �� ��������
		{
			//printf("(%d, %d) ", i, j);
			printf("*");
		}
		printf("\n");		
	}
	
	getchar(); // ��� �� �� "������������" ����
}