#include <stdio.h>
#include <stdlib.h>

int main()
{
  const int pin = 7158;
  int max_attempt = 3;
  
  int user_input = 0;
  int nbr_user_attempt = max_attempt;

  do
  {
      printf("code pin: \n");
      scanf("%d", &user_input);
  
  if(user_input == pin)
    {
      printf("Unlocked");
    }
  else
    {
        nbr_user_attempt -- ;  
        printf("Try again !, il vous reste %d tentative(s)\n", nbr_user_attempt);
     }
     
  }
  while((pin != user_input) && (nbr_user_attempt > 0));
  
  return 0;
}