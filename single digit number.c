#include <stdio.h>
int main() {
    int s;
    scanf("%d",&s);
    if(s>-9&&s<9)
    {
        printf("single digit");
    }
    else
    {
        printf("not single digit");
    }
    return 0;
}