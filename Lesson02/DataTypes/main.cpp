/*
    ����:   Introduction
    ������� #2
    ����:   ���������� � ���� ������
*/
#include <stdio.h> // ���������� ������������ ���� ��� ��������� ������� printf 
#pragma warning(disable: 4996) // ��� ���������� ������ ��� ������ � �������� scanf

void main() 
{   
    // ���������� ����������. ������ ������ ��� 32 ������ �������
    // ������������� ����
    // 1 ���� - ��� �������� �������� 
    char            sch;  // �� -128 �� 127
    unsigned char   uch;  // ��    0 �� 255
    // 2 ���� �������� �����
    short           ss;   // �� 0 �� 65 535
    unsigned short  us;   // �� -32 768  �� 32 767
    // 4 ���� �����
    int             si;   // �� -2 147 483 648   ��   2 147 483 647
    unsigned int    ui;   // �� 0 �� 4 294 967 295
    // 4 ���� ������� �����
    long            sl;   // ����� ��, ��� int
    unsigned long   ul;   // ����� ��, ��� int
    // 8 ���� ����� ������� �����
    long long       sll;  // �� -9 223 372 036 854 775 808 �� 9 223 372 036 854 775 807
    unsigned long long   ull;   // �� 0 �� 18 446 744 073 709 551 615
    
    // ������������ ����
    // 4 ����
    float           f; // 3,4E +/- 38 (7 ������)
    // 8 ����
    double          d; // 1,7E +/- 308 (15 ������)

    // ������ ������ � �����������. ���������� ����������� � �������
    int a, b, c;    // ��������� ����������

    printf("a: ");   // ����������� �� ���� ���������� �
    scanf("%d", &a); // ��������� �������� ������������ � ���������� � ���������� �

    printf("b: ");
    scanf("%d", &b);

    c = a + b;     //  ���������� ����� ����� � ������������ ���������� �
    printf("a + b = %d + %d = %d\n", a, b, c);
    // ��� ������ ����� printf � ����� ����� scanf ����������� ��������� �������������:
    // %�	    ������ 
    // %d � %i	���������� ����� ����� �� ������ 
    // %e	���������������� ������������� ����� (� ���� �������� � �������) (e �� ������ ��������)
    // %f	���������� ����� � ��������� ������ 
    // %g	���������� ����� �������� �� �������� %e ��� %f
    // %s	���������� ������ 
    // %u	���������� ����� ����� ��� ����� 
    // ��� �������������: http://www.c-cpp.ru/content/printf
}   