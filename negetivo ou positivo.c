#include<stdio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int N;
	do
	{
		printf("diz um numúro\n");
		scanf_s("%d", &N);
		if (N < 0)
		{
			printf("é negativo\n");
		}
		else if (N > 0)
		{
			printf("é positivo\n");
		}
	} while ("N != 0");
		printf("digito 0 - VAI TE EMBORA");
	return 0;
	}