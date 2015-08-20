#include <stdio.h>
#include <stdlib.h>

void swap_num(int *a, int *b)
{
    // здесь будет ваша реализация функции swap_num
}

/*
    Задание 1.
    Реализовать функцию swap_num для обмена значениями двух переменных,
    Пример:
        int a = 5, b = 10;
        swap_num(&a, &b);
        printf("a: %d, b: %d\n", a, b); 
    Вывод:
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
    Задание 2.
    В приведенном ниже коде содержатся ошибки. Найти и исправить ошибки.
*/
void task02()
{
    int x, *p;
    x = 10;
    p = x;
    printf ("x: %d\n", p); // вывести значение перемнной x через указатель p
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
    Задание 3.
    Объявить целочисленный массив размером 10 элементов.
    Получить адрес первого и последнего элемента массива.
    Сохранить эти адрес в указателях.
    Вычесть из указателя на последний элемент массива адрес 
    первого элемента массива. Вывести на экран результат.
    
    Изменится ли результат, если размер массива изменить на 5, 15, 20?
    Есть ли какая-либо закономерность?
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