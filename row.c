#include <stdio.h>
#define COLMAX10
#define ROWMAX 12
int main()

{
    int row, column, y;
    row=(1);
    printf("MULTIPLICATION TABLE \n");
    printf("======================");
    do/*outer loops starts */
    {
        column=1;
        do/*inner loop starts;
        {
        y=row * column;
        printf("%5d",y);
        column=column+1;

        }
        while (column<=COLMAX);|/*inner loop*/
        printf("%n");
        row=(row + 1);
}
     while(row <= ROMAX);
    printf("====================");
}

    
