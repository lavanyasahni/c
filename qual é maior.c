#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n1, n2, n3;
	printf("diz o premeiro número lol");
	scanf_s("%d", &n1); printf("diz o segundo número lol");
	scanf_s("%d", &n2); printf("diz o terceiro número lol");
	scanf_s("%d", &n3);
	if (n1 > n2 && n1 > n3)
	{
		printf("maior é %d", n1);
	}
	else if (n2 > n3)
	{
		printf("maior é %d", n2);
	}
	else
		printf("maior é %d", n3);
	return 0;
}
