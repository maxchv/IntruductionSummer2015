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