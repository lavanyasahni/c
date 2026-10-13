#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int kmi, kmf, l;
	float valor;
	printf("diz os kms iniciais");
	scanf_s("%d", &kmi);
	printf("diz os kms finais");
	scanf_s("%d", &kmf);
	printf("diz os litros que gastaste");
	scanf_s("%d", &l);
	valor = l * 100 / (kmf - kmi);
	printf("o teu carro gastou %.1f litrod aos 100km", valor);
}