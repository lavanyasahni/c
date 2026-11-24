#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "");
	char* nomes[5] = { "millie" , "bobby" , "lavanya" ,"ana","lavu" };
	int i;
	for (i = 4; i >= 0; i--)
	{
		printf("%s \n", nomes[i]);
	}
}

