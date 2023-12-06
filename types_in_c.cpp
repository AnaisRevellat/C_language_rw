#include <stdio.h>
#include <stdlib.h>

int main()
{
    int my_int = 12;
    int size_int = sizeof(int);
    printf("my_int = %d and take in memory space %d bytes \n", my_int, size_int);
    
    char my_char = 'A';
    printf("my_char %c and take in memory space %d bytes \n", my_char, sizeof(char));
    
    float my_float = 5.5;
    printf("my_float %f and take in memory space %d bytes \n", my_float, sizeof(float));
    
    double my_double = 5.5;
    printf("my_double %f and take in memory space %d bytes \n", my_double, sizeof(double));

    return 0;
}
