/**
 * Домашнее задание: дописать карточную игру 21
  */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#pragma warning(disable: 4996)

#define NCARDS 36 // малая колода

// Глобальный переменные
char cards[NCARDS][4]; // колода карт
int  indx[NCARDS];     // индексы колоды карт

// Функция возвращает цену карты
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

// Функция подсчитывает сумму очков по массиву индексов score размером size
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
// инициализация игры - создание колоды карт 
// и инициализация массива индексов карт
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
            } else if(i == 5) { // В
                cards[idx][1] = 'В';
                cards[idx][2] = '\0';
            } else if(i == 6) { // Д
                cards[idx][1] = 'Д';
                cards[idx][2] = '\0';
            } else if(i == 7) { // К
                cards[idx][1] = 'К';
                cards[idx][2] = '\0';
            } else if(i == 8) {  // Т
                cards[idx][1] = 'Т';
                cards[idx][2] = '\0';
            }
        }
    }	
}

// функция обмена данными двух переменных
void swap_num(int *n1, int *n2)
{
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

// Задача 1: реализовать функцию перемешивания массива индексов
// indx - это глобальный массив значения которого упорядочены от 0 до 35
void shuffle_cards()
{
   // здесь будет ваше код
}

// Отобразить текущие карты и вывести сумму очков
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
    printf("\n\tОчков: %d\n", all_score(use_cards, size));
    printf("\n");
}

// вернуть карту из колоды
void get_card(int to[], int *to_curr, int *from_curr)
{
    to[(*to_curr)++] = indx[(*from_curr)++];
}

int main()
{
    setlocale(LC_ALL, "russian");      
    game_init(); // подготовка колоды карт, инициализация индексов

    while(true) // играть всегда
    {
        shuffle_cards();

        int comp_cards[10],     // индексы карт, которые на руках у банкира
            player_cards[10];   // индексы карт, которые на руках у игрока
        int n_player = 0,       // сколько карт у игрока
            n_comp = 0;         // сколько карт у банкира
        int curr = 0;           // текущий индекс карты в indx

        get_card(comp_cards, &n_comp, &curr); // выдача первой карты банкиру
        get_card(comp_cards, &n_comp, &curr); // выдача второй карты банкиру

        get_card(player_cards, &n_player, &curr); // выдача первой карты игроку

        int menu;
        do{     
            get_card(player_cards, &n_player, &curr); // выдача второй карты игроку
            if(all_score(player_cards, n_player) >= 21) // если перебор, то прекращаем цикл
            {
                break;
            }
            system("cls"); // очистка экрана
            printf("Банкир: ");
            show_cards(comp_cards, n_comp-1); // показать только первую карту банкира
            printf("Игрок: ");
            show_cards(player_cards, n_player); // показать все карты игрока
            // вывести меню
            printf("1. Еще одну карту\n");
            printf("2. Достаточно\n");
            scanf("%d", &menu);
        } while(menu != 2);

        system("cls"); // очистка экрана

        // Задача 2. Реализовать подсчет очков
        // если сумма очков для игрока <= 21, то
        // выдать карту банкиру до тех пор, пока сумма
        // очков банкира на превышает 17
        if(all_score(player_cards, n_player) <= 21)
        { // если игрок не перебрал
            while(all_score(comp_cards, n_comp) < 17)
            { // банкир берет следующую карту
                get_card(comp_cards, &n_comp, &curr);           
            }  
            // вывод результата
            printf("Банкир: ");
            show_cards(comp_cards, n_comp);
            printf("Игрок: ");
            show_cards(player_cards, n_player);
            // если у банкира сумма очков > 21, то
            // вывести сообщение, что банкир перебрал
            if(/* ваше условие */)
            {
                // ваш вывод
            }
            // иначе, если у банкира сумма очков > чем у игрока, то
            // вывести сообщение, что игрок проиграл по очкам
            else if(/* ваше условие */)
            {
               // ваш вывод
            } 
            // иначе, если у банкира сумма очков < чем у игрока, то
            // вывести сообщение, что игрок проиграл по очкам
            else if(/* ваше условие */)
            {
                // ваш вывод
            }
            // иначе, вывести сообщение - ничья
            else
            {
                // ваш вывод
            }
        } 
        else // иначе - вывести сообщение, что игрок проиграл
        {        
            printf("Банкир: ");
            show_cards(comp_cards, n_comp);
            printf("Игрок: ");
            show_cards(player_cards, n_player);
            printf("Игрок проиграл - перебор.\n");
        }

        system("pause");
    }
    system("pause");
    return 0;
}
