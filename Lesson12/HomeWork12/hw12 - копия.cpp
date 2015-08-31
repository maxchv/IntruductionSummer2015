/**
 * �������� �������: �������� ��������� ���� 21
  */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#pragma warning(disable: 4996)

#define NCARDS 36 // ����� ������

// ���������� ����������
char cards[NCARDS][4]; // ������ ����
int  indx[NCARDS];     // ������� ������ ����

// ������� ���������� ���� �����
int value_card(int idx)
{
    int num = idx % 9;
    if(num < 5)
    {
        return num + 6;
    }
    else if(num < 8)
    {
        return num - 3;
    }
    else
    {
        return 11;
    }	
}

// ������� ������������ ����� ����� �� ������� �������� score �������� size
int all_score(int score[], int size)
{
    int sum = 0;

    for(int i=0; i<size; i++)
    {
        sum += value_card(score[i]);
    }
    if(size == 2 && (value_card(score[0]) == 11 && value_card(score[1]) == 11))
    {
        sum = 21;
    }

    return sum;
}
// ������������� ���� - �������� ������ ���� 
// � ������������� ������� �������� ����
void game_init()
{    
    srand(time(NULL));
    for(int m=3; m<7; m++)
    {
        for(int i=0; i<9; i++)
        {
            int idx = (m-3)*9 + i;
            indx[idx] = idx;
            cards[idx][0] = m;            
            if(i < 4) {
                cards[idx][1] = '6' + i;
                cards[idx][2] = '\0';
            } else if(i == 4) { // 10
                cards[idx][1] = '1';
                cards[idx][2] = '0';
                cards[idx][3] = '\0';
            } else if(i == 5) { // �
                cards[idx][1] = '�';
                cards[idx][2] = '\0';
            } else if(i == 6) { // �
                cards[idx][1] = '�';
                cards[idx][2] = '\0';
            } else if(i == 7) { // �
                cards[idx][1] = '�';
                cards[idx][2] = '\0';
            } else if(i == 8) {  // �
                cards[idx][1] = '�';
                cards[idx][2] = '\0';
            }
        }
    }	
}

// ������� ������ ������� ���� ����������
void swap_num(int *n1, int *n2)
{
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

// ������ 1: ����������� ������� ������������� ������� ��������
// indx - ��� ���������� ������ �������� �������� ����������� �� 0 �� 35
void shuffle_cards()
{
   // ����� ����� ���� ���
}

// ���������� ������� ����� � ������� ����� �����
void show_cards(int use_cards[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%s ", cards[use_cards[i]]);
        if(i != size - 1)
        {
            printf("| ");
        }
    }
    printf("\n\t�����: %d\n", all_score(use_cards, size));
    printf("\n");
}

// ������� ����� �� ������
void get_card(int to[], int *to_curr, int *from_curr)
{
    to[(*to_curr)++] = indx[(*from_curr)++];
}

int main()
{
    setlocale(LC_ALL, "russian");      
    game_init(); // ���������� ������ ����, ������������� ��������

    while(true) // ������ ������
    {
        shuffle_cards();

        int comp_cards[10],     // ������� ����, ������� �� ����� � �������
            player_cards[10];   // ������� ����, ������� �� ����� � ������
        int n_player = 0,       // ������� ���� � ������
            n_comp = 0;         // ������� ���� � �������
        int curr = 0;           // ������� ������ ����� � indx

        get_card(comp_cards, &n_comp, &curr); // ������ ������ ����� �������
        get_card(comp_cards, &n_comp, &curr); // ������ ������ ����� �������

        get_card(player_cards, &n_player, &curr); // ������ ������ ����� ������

        int menu;
        do{     
            get_card(player_cards, &n_player, &curr); // ������ ������ ����� ������
            if(all_score(player_cards, n_player) >= 21) // ���� �������, �� ���������� ����
            {
                break;
            }
            system("cls"); // ������� ������
            printf("������: ");
            show_cards(comp_cards, n_comp-1); // �������� ������ ������ ����� �������
            printf("�����: ");
            show_cards(player_cards, n_player); // �������� ��� ����� ������
            // ������� ����
            printf("1. ��� ���� �����\n");
            printf("2. ����������\n");
            scanf("%d", &menu);
        } while(menu != 2);

        system("cls"); // ������� ������

        // ������ 2. ����������� ������� �����
        // ���� ����� ����� ��� ������ <= 21, ��
        // ������ ����� ������� �� ��� ���, ���� �����
        // ����� ������� �� ��������� 17
        if(all_score(player_cards, n_player) <= 21)
        { // ���� ����� �� ��������
            while(all_score(comp_cards, n_comp) < 17)
            { // ������ ����� ��������� �����
                get_card(comp_cards, &n_comp, &curr);           
            }  
            // ����� ����������
            printf("������: ");
            show_cards(comp_cards, n_comp);
            printf("�����: ");
            show_cards(player_cards, n_player);
            // ���� � ������� ����� ����� > 21, ��
            // ������� ���������, ��� ������ ��������
            if(/* ���� ������� */)
            {
                // ��� �����
            }
            // �����, ���� � ������� ����� ����� > ��� � ������, ��
            // ������� ���������, ��� ����� �������� �� �����
            else if(/* ���� ������� */)
            {
               // ��� �����
            } 
            // �����, ���� � ������� ����� ����� < ��� � ������, ��
            // ������� ���������, ��� ����� �������� �� �����
            else if(/* ���� ������� */)
            {
                // ��� �����
            }
            // �����, ������� ��������� - �����
            else
            {
                // ��� �����
            }
        } 
        else // ����� - ������� ���������, ��� ����� ��������
        {        
            printf("������: ");
            show_cards(comp_cards, n_comp);
            printf("�����: ");
            show_cards(player_cards, n_player);
            printf("����� �������� - �������.\n");
        }

        system("pause");
    }
    system("pause");
    return 0;
}
