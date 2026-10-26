#include<stdio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int n;
	printf("diz aí um número");
	scanf_s("%i", &n);
	if (n != 0)
	{
		if (n % 3 == 0)
		{
			printf("é multiplo de 3 \n");
		}
		if (n % 5 == 0)
		{
			printf("é multiplo de 5\n");
		}
	}
	while (n != 0);

	printf("carregaste no 0 byebyeeee\n");
	return 0;
}