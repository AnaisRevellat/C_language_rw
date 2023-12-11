#include <stdio.h>
#include <stdlib.h>

int main()
{
    int my_int = 10;
    short my_short = -10;
    long my_long = 125;
    float my_float = 15.5;
    double my_double = 155.5;
    char my_char = 'A';


    printf("My integer = %d\nand takes %d bytes in memory space.\n", my_int, sizeof(int));
    printf("My short = %d\nand takes %d bytes in memory space.\n", my_short, sizeof(short));
    printf("My long = %ld\nand takes %d bytes in memory space.\n", my_long, sizeof(long));
    printf("My float = %f\nand takes %d bytes in memory space.\n", my_float, sizeof(float));
    printf("My double = %f\nand takes %d bytes in memory space.\n", my_double, sizeof(double));
    printf("My char = %c\nand takes %d bytes in memory space.\n", my_char, sizeof(char));

    return 0;
}
