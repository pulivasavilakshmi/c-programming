#include <stdio.h>
int main() {
    /* calculating area of circle*/
    /*formula is pi*sqrt(r)*/
    float pi=3.14519;
    int r;
    float area;
    printf("what is the radius?");
    scanf("%d",&r);
    area=pi*r*r;
    printf(" ");
    return 0;
}