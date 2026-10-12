#include<stdio.h>
#include<locale.h>
int main(void)
{
	int s;
	float area,p;
	printf("say the side");
	scanf_s("%d", &s);
	area = s * s;
	p = 4 * s;
	printf("the area is: %f and the perimeter is: %f", area, p);
}