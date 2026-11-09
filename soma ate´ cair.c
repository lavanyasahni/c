#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n, soma = 0,i = 0;
	float média;
	do
	{
		printf("diz um numero");
		scanf_s("%i", &n);
		soma = n + soma;
		i = i + 1;
	}while (soma < 1000);
		média = soma / i;
		printf("A ,média dos numeros is %.0f", média);
		return 0;
	
	



}