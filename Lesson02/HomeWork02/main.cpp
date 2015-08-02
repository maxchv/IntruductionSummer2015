/* �������� ������� �2 */

#include <stdio.h>  
#include <stdlib.h>
#pragma warning(disable: 4996) 

void main() 
{  
    /*
    ������� 1.
    �������� ��� ���������� unsigned char
    ������ ������ ���������� �������� 255, ������ 1.
    ��������� ����� ������ ���� ����� � ��������� ��������� ��������.
    ������� ����� �� �����. ���� ����� ����� 255 � 1? ���������������� ���������.
    */
    printf("Task #01\n");
    unsigned char a, b, c;
    a = 255;
    b = 1;
    c = a + b; 
    printf("%d\n\n", c); // ������� 0 �.�. ����� 256 ���������� � 9 �����, � char �������� ������ 1 ���� �.�. 8 ���
    // ����� 256 � �������� ����: 1 0000 0000. �.�. ������� ��� 1 ����� �������, �� �� �������� ����� 0000 0000, �.�. 0 � ���������� ����������

    /*
    ������� 2. 
    ������ ��� ������������� R1, R2, R3. ��������� �������� �������������  R0 �� �������: 1/R0 = 1/R1+1/R2+1/R3.
    �������� ������������� �������� � ���������� �������������.
    ����������� ������: R1=2, R2=4, R3=8 R0 = 1.142857
    */
    printf("Task #02\n");
    float R1, R2, R3, R0;
    printf("Type R1, R2 and R3: ");
    scanf("%f %f %f", &R1, &R2, &R3);
    R0 = 1./(1./R1 + 1./R2 + 1./R3);
    printf("R0 = %g\n\n", R0);

    /*
    ������� 3.
    �� �������� ����� ���������� ����� ������� ����� �� �������  S =  pi*R*R, 
    ������ ��������� �� ������� ����� ����������: L=2*pi*R
    ���������� pi = 3.14
    */
    printf("Task #03\n");
    float pi = 3.14;
    float S, L, R;
    printf("Type L: ");
    scanf("%f", &L);
    R = L / 2. / pi;
    S = pi * R * R;
    printf("R = %f\nS = %f\n\n", R, S);

    /*
    ������� 4.
    ������������ ������ � ���������� ����� ������ � ����� ���������� ����������� ��������� 
    (����, ������ � �������). ��������� ��������� ���������, ���� ��������� ������ � 30 ������.
    */
    printf("Task #04\n");
    int hour1, min1, sec1;
    int hour2, min2, sec2;
    float cost = 0.3; // ��������� ������
    char delim; // ����������, ������� ����� ��������� ������ :
    printf("Type start call (i.e. 10:10:03): ");
    scanf("%d%c%d%c%d", &hour1, &delim, &min1, &delim, &sec1);
    printf("Type end call (i.e. 11:10:03): ");
    scanf("%d%c%d%c%d", &hour2, &delim, &min2, &delim, &sec2);
    int total = (hour2 * 3600 + min2 * 60 + sec2) - (hour1 * 3600 + min1 * 60 + sec1);
    float call_cost = total / 60 * cost; 
    printf("You should pay: $%.2f\n\n", call_cost);

    /*
    ������� 5.
    ������������ ������ � ���������� ����������, ������ ������� �� 100 �� � 
    ��������� ���� ����� �������. 
    ������� �� ����� ������������� ������� �� ���������� ������� �� ������ ����� �������
    */
    printf("Task #05\n");
    float distance, cons_fuel, fcost1, fcost2, fcost3;
    printf("Type distance and fuel consumption: ");
    scanf("%f %f", &distance, &cons_fuel);

    printf("Type the cost for three gasolines: ");
    scanf("%f %f %f", &fcost1, &fcost2, &fcost3);
    printf("For first gasoline you should pay: $%.2f\n", distance*cons_fuel*fcost1);
    printf("For second gasoline you should pay: $%.2f\n", distance*cons_fuel*fcost2);
    printf("For third gasoline you should pay: $%.2f\n\n", distance*cons_fuel*fcost2);

    system("pause");
}    