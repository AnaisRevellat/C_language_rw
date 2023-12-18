#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int
main ()
{
  /* 
     -"Quel est le rayon d'un cercle ?"
     - Lancer le calcul pour afficher le diamC(tre d'un cercle (int).
     - Calculer et afficher la circonfC)rence du cercle (float).
     -Calculer et afficher l'aire du cercle(float).
     
     -Calculer le volume d'un cylindre.
     -Calculer le volume d'un cône.
   */

  int circle_radius = ' ';
  double pi_value = M_PI;
  int cylinder_height = ' ';

  printf ("Quel est le rayon de votre cercle ?\n");
  scanf("%d", &circle_radius);
  printf("Le résultat du diamètre de votre cercle est de : %d cm\n", circle_radius * 2);
  printf("La circonférence de votre cercle est de : %f cm\n", (pi_value * 2) * circle_radius);
  printf("L'aire de votre cercle est de: %f cm\n", pi_value * pow(circle_radius, 2));
  
  printf("Quel est la hauteur de votre cylindre ?\n");
  scanf("%d", &cylinder_height);
  printf("Le volume de votre cylindre est de : %f cm3\n", (pi_value * pow( circle_radius,2)) * cylinder_height);
  
  float cone_volume = (1.0/3.0) * (pi_value * pow(circle_radius,2)) * cylinder_height;

  printf("Le volume de votre cône est de :  %f cm3\n", cone_volume);
  
  return 0;

}
