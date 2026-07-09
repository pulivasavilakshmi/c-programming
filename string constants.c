#include <stdio.h>
int main() {
    char s1[20],s2[20],s3[20];
    int x,11,12,13;
    printf("\n\Enter two string constants\n");
    printf("?");
    scanf("%s %s",s1,s2);
    /*comparaing s1 and s2*/
    x=strcmp(s1,s2);
    if(x!=0)
    {
        printf("\n\nstrings are not equal \n");
        strcat(s1,s2);/* joining s1 and s2*/
    }

    
    return 0;
}