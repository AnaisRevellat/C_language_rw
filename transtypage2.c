#include <stdio.h>
#include <stdlib.h>

int main()
{
  char a_letter = ' ';
  printf("Entrez une lettre : \n %c \n", a_letter);
  scanf("%c", &a_letter);
  printf("This is your letter: %c\nin decimal gives %\d\n", a_letter, (int)a_letter);
  printf("This is your letter: %c\nin hexadecimal gives %x\n", a_letter, (int)a_letter);
  return 0;
}