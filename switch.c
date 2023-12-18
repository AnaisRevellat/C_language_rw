#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_choice = 0;
    
    printf("Que voulez-vous manger ? 1-un croissant 2-un pain au chocolat 3-un éclair ?\n");
    scanf("%d", &user_choice);
    
    switch(user_choice)
    {
        case 1:
        case 2:
        printf("Vous avez-pris une viennoiserie");
        break;
        
        case 3:
        printf("Vous avez pris une patisserie");
        break;
        
        default:
        printf("Faites-un choix");
        break;
    }

    return 0;
}
