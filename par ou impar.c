#include<stdio.h>
#include<locale.h>

int main(void)

{setlocale(LC_ALL, "");
int n;
do
{
printf("diz numero:\n");

scanf_s("%d", &n);

if (n % 2 == 0)
{
printf("o numero is par\n");
}
else
{
printf("o numero is impar\n");
}
} while (n != 0);
return 0;
}

	


		
		
			




	