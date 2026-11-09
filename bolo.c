#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int passoas, bolo, calcular;
	printf("Digite o número de pessoas: ");
	scanf_s("%d", &passoas);
	printf("Digite o número de bolos: ");
	scanf_s("%d", &bolo);

	if (passoas > 0)
	{
		calcular = bolo / passoas;
		printf("Cada pessoa receberá %d pedaços de bolo.\n", calcular);
	}
	else
	{
		printf("O número de pessoas deve ser maior que zero.\n");
	}

	return 0;

}