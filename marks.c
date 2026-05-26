#include <stdio.h>
int main() 
{
    int tel, eng, math, phy, chem, comp, total; 
    int average;
    printf("enter a telugu mark: ");
    scanf("%d", &tel);
    printf("enter a english mark: ");
    scanf("%d", &eng); 
    printf("enter a maths mark: ");
    scanf("%d", &math);
    printf("enter a physics mark: ");
    scanf("%d", &phy);
    printf("enter chemistry mark: ");
    scanf("%d", &chem); 
    printf("enter a computer mark: ");
    scanf("%d", &comp);
    total = tel + eng + math + phy + chem + comp; 
    average = total / 6;
    printf("total=%d\n", total);
    printf("average=%d\n", average); 

    return 0; 
}