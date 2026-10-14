#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float nota;
	printf("Diz aí um número");
	scanf_s("%f", &nota);
	if (nota > 9.5)
	{
		printf("Voce é inteligente");
	}
	else
	{
		printf("Voce é burro");
	}
	return 0;
}