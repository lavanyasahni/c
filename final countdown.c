#include<stdio.h>

int main()
{
	int n;
	printf("diz um numero\n");
	scanf_s("%d", &n);
	while (n > 0)
	{
		printf("tik tik %d\n", n);
		n--;
	}
	printf("times up");
	return 0;
}