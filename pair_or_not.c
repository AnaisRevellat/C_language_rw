#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int user_integer = 0;

int main()
{
    printf("Pouvez-vous entrer un nombre entier ?");
    scanf("%d", &user_integer);
    if(user_integer % 2 == 0 )
    {
        printf("Votre nombre est pair");
    }else{
        printf("Votre nombre est impair");
    }
}
