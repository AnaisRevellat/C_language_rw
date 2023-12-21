#include <stdio.h>
#include <stdlib.h>

int main()
{    
    int my_int = 12;
    int price = 12000;
    
    char my_char = 'A';
    int* p_int = 0;
    
    p_int = &my_int;
    
    printf("my int = %d, address = %p\n", my_int, &my_int);
    printf("p_int = %p\n", p_int);
    printf("my int = %c, address = %p\n", my_char, &my_char);

    return 0;
}
