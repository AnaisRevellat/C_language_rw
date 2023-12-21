/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   
 int nombre_mystere = 0, nombre_utilisateur = 0, nombre_de_tentatives = 0, nombre_tentatives_max = 5;
 int user_input = 0;
 const int VALEUR_MIN = 1, VALEUR_MAX = 100;
 
 do{

 srand(time(NULL));
 nombre_mystere = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;
 nombre_de_tentatives = 0;
 printf("Devinez quel est mon nombre mystere. Indice: c'est un nombre entre %d et %d \n", VALEUR_MIN, VALEUR_MAX);

   do
  {
    if(nombre_de_tentatives >= nombre_tentatives_max)
    {
        printf("Trop de tentatives ! Le nombre était: %d\n", nombre_mystere);
        break;
    }
    scanf("%d", &nombre_utilisateur);
    nombre_de_tentatives++;
    
    if(nombre_utilisateur < nombre_mystere)
    {
        printf("C'est plus !\n");
    }
    else if(nombre_utilisateur > nombre_mystere)
    {
        printf("C'est moins !\n");
    }
    else if(nombre_utilisateur == nombre_mystere)
    {
      printf("Bravo, bingo !, vous avez utilisé %d tentatives !\n", nombre_de_tentatives);
    }
      
  }
   while(nombre_utilisateur != nombre_mystere);
   
   printf("Voulez-vous relancer une partie ?\n (1-oui 2-non)");
   scanf("%d", &user_input);
   
 }while(user_input != 2);

    return 0;
}