/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()

{
    char operator_1 = ' ';
    int user_nbr_1 = 0;
    int user_nbr_2 = 0;
    int result = 0;
    int operator_tested = 0;
    
    printf("Indiquez l'operation mathematique que je dois resoudre sans espace\nSous la forme [ nombre1 operateur nombre2]\n\nex: 2+3");
    printf("opérateur autorisés [+,-,*,/,%%]\n");
    scanf("%d %c %d", &user_nbr_1, &operator_1, &user_nbr_2);
    
    if(operator_1 == '/' && (user_nbr_2) == 0){
        printf("Pas de division par 0 !");
    }else{  
    switch(operator_1)
    {
        case '+':
            result = user_nbr_1 + user_nbr_2;
            operator_tested = 1;
        break;
        case '-':
            result = user_nbr_1 - user_nbr_2;
            operator_tested = 1;
        break;
        case '*':
            result = user_nbr_1 * user_nbr_2;
            operator_tested = 1;
        break;
        case '/':
            result = user_nbr_1 / user_nbr_2;
            operator_tested = 1;
        break;
        case '%':
            result = user_nbr_1 % user_nbr_2;
            operator_tested = 1;
        break;
        default:
            int operator_tested = 0;
        }
    }
    
    if(operator_tested){
    
        printf("Donc vous avez: %d %c %d \n", user_nbr_1, operator_1, user_nbr_2);
        printf("Le résulat est : %d ", result);
    
    } else {
    
        printf("Veuillez utiliser un caractère autorisé !");
    
        return 0;
    }
}
