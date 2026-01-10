#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    f*=i;
    return f;
}
int main()
{
    int n,temp,digit,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        sum+=fact(digit);
        temp/=10;
    }
    if(sum==n){
        printf("Strong Number");
    }
    else{
        printf("Not Strong Number");
        return 0;
    }
}