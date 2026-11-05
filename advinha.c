#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, num, i = 0;
    srand(time(NULL));
    num = rand() % 1000 + 1;
    do
    {
     printf("diz um numero em 1 and 1000: ");
     scanf_s("%d", &guess);
      i++;
      if (guess < num)
      {
         printf("numero is baixou.\n");
      }
      else if (guess > num)
      {
        printf("o nunero is alto.\n");
      }
      else
     {
      printf("PARABENES YOU GUESS THE NUMBERRRRRRRRRRRRRR!!!! %d!\n", num);
       printf("asertas em %d tries.\n", i + 1);
     }
    } while (guess != num);
}