#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int main()
{
double R0, R1, R2, R3;

printf("R1: ");
scanf("%lf", &R1);
printf("R1: %g", R1);
printf("R2: ");
scanf("%lf", &R2);
printf("R2: %g", R2);
printf("R3: ");
scanf("%lf", &R3);
printf("R2: %g", R2);

R0 = (R1*R2*R3) / ((R1 + R2)*R3 + (R1*R2));

printf("R0=%f\n", R0);
system("pause");

}