/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int my_int = -12;
    printf("my_int = %d and take in memory space %d bytes \n", my_int, sizeof(int));*/

    short my_short = -12;
    printf("my_short = %d and takes %d bytes in memory space \n", my_short, sizeof(short));
    
    long my_long = 125;
    printf("my_long = %ld and takes %d bytes in memory space \n", my_long, sizeof(long));
    
    unsigned int my_unsigned_int = 12;
    printf("my_unsigned_int = %d and takes %d bytes in memory space \n", my_unsigned_int, sizeof(unsigned int));
    
    char my_char = 'A';
    printf("my_char %c and takes %d bytes in memory space \n", my_char, sizeof(char));
    
    float my_float = 5.5;
    printf("my_float %f and takes %d bytes in memory space \n", my_float, sizeof(float));
    
    double my_double = 5.5;
    printf("my_double %f and takes %d bytes in memory space \n", my_double, sizeof(double));

    return 0;
}
