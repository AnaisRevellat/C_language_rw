#include <stdio.h>

int main()
{
   const int secret_code = 7158;
   int nbr_of_attempts = 0;
   const int max_attempts = 3;
   
   int user_input = 0;
   
   for(int nbr_of_attempt = 0; nbr_of_attempts < max_attempts; nbr_of_attempts ++)
   {
       printf("Enter the code: \n");
       scanf("%d", &user_input);
       
       if(user_input < 0)
       {
           printf("Positive numbers only\n");
           continue;
       }
       
       if(user_input == secret_code)
       {
           printf("Welcome !");
           break;
       }
       else
       {
           printf("Incorrect code \n");
       }
   }

    return 0;
}
