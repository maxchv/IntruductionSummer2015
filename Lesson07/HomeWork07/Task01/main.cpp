/*    
    Задание 1.
	    Написать функцию рассчета объема цилиндра.
	    Объем цилиндра равен: V = pi * r * h,
	    где pi - число Пи, r - радиус основания цилиндра,
	    h - высота цилиндра
*/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
//float pi = 3.14;
float volume_cilinder(float r, float h)
{
	float V = PI*r*r*h;
	return V;
}

void foo()
{
	// pi *= pi;
}

int main()
{
	foo();
	printf("V: %f\n", volume_cilinder(1,1));
	system("pause");
	return 0;
}