#include <stdio.h>

int main()
{
   int number = 0;
   
   do{
       printf("Entrez un nombre entre 1 et 10\n");
       scanf("%d", &number);
   }
   while(!(number >= 0 && number <= 10));
   
   return 0;
}
