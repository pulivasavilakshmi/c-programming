#include <stdio.h>
int main() {
    int year;
    scanf("%d",&year);
    printf("Enter the year");
    if(year%4==0)
    {
    printf("it is leap year");
    }
    else
    {
        printf("it is not leap year");
    }
    return 0;
}