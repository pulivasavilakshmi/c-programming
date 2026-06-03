#include <stdio.h>
int main() {
    FILE*f1;
    char c;
    printf("Data Input\n\n");
    /*open the file Input*/
    f1=fopen("INPUT","w");
    /*Get a character from keyboard*/
    while((c=getchar()!=EOF))
    /*Write a character to INPUT*/
    putc(c,f1);
    /*close the file INPUT*/
    fclose(f1);
    printf("\nData Output\n\n");
    /*Reopen the file INPUT*/
    f1=fopen("INPUT","r");
    /*Read a character from INPUT*/
    while((c=getc(f1))!=EOF)
    /*Display a character on screen*/
    printf("%c",c);
    /*close the file INPUT*/
    fclose(f1);

    return 0;
}