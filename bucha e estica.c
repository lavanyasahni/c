#include<stdio.h>

int main()
{
	int n, n2, maior, menor, i, repetir = 0;
	do
	{
		maior = -214748364, menor = 214748364;
		printf("quantos numeros?");
		scanf_s("%d", &n);

		for (i = 1; i <= n; i++)
		{
			printf("escreve o numero");
			scanf_s("%d", &n2);

			if (n2 > maior)
			{
				maior = n2;
			}
			if (n2 < menor)
			{
				menor = n2;
			}
		}
		printf("O numero maior is: %d\n", maior);
		printf("O numero maior is: %d\n", menor);
		printf("queres continuar? (s-1, n=0) ");
		scanf_s("%d", &repetir);
	} while (repetir != 0);

}