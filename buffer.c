#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define Null 0
int main()
{
 char *buffer;
 /*allocating memory*/
 if((buffer=(char*)malloc(10))==Null)
 {
    printf("malloc failed.\n");
    exit(1);
 }
   printf("buffer of size %d created \n",_msize(buffer));
   strcpy(buffer,"HYDERABAD");
   printf("\nbuffer contains: %s \n",buffer);
   /*Reallocation*/
   if((buffer=(char*)realloc(buffer,15))==NULL)
   {
    printf("Reallocation failed.\n");
    exit(1);
    }
    printf("\n buffer size modified.\n");
    printf("\n buffer still contains:\n",buffer);
    strcpy(buffer,"SECUNDERABAD");
    printf("\n buffer now contains: %s \n",buffer);
    /* Freeing memory*/
    free(buffer);
}

