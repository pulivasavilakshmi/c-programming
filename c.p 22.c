#include<stdio.h>
int main()
{
int i,count=0;
scanf("%d",&i);
if(i==0)
count =1;
else
{
    while(i!=0){
    count++;
    i/=10;
    }
}
printf("%d",count);
return 0;
}