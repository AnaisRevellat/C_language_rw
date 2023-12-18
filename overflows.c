#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long my_long = 65535;
    unsigned short my_short = 65535;

    my_short += 10;

    printf("unsigned long = %d , unsigned short = %d", my_long, my_short);

    return 0;
}
