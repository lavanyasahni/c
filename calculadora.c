#include<stdio.h>
int main(void)
{
	float n1, n2;
		char op;
		printf("quers fazer que (+,-,*,/):\n");
		scanf_s("%c", &op);
		printf("diz o premeiro numero:\n");
		scanf_s("%f", &n1);
		printf("diz o segundo numero:\n");
		scanf_s("%f", &n2);
		switch (op)
		{
		case '+':
			printf("resultado: %.2f\n", n1+n2);
			break;
		case '-':
			printf("resultado: %.2f\n", n1 - n2);
			break;
		case '*':
			printf("resultado: %.2f\n", n1 * n2);
			break;
		case '/':
			printf("resultado: %.2f\n", n1 / n2);
			break;
		default:
			printf("invalid op");
		}
		return 0;

}