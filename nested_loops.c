#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int table_id = 1; table_id <= 10; table_id++)
    {
        printf("\n Display table %d \n", table_id);
    
        for(int line = 0; line < 10; line++)
        {
            printf("\t %d x %d = %d\n", table_id, line, table_id * line);
        }
    }
    
    return 0;
}
