#include<stdio.h>
void merge(int a[],int l,int m,int r){

    int i=1,j=m+l,k=0,t[100];
    while(i<=m&&j<=r)t[k++]=a[i]<a[j]?a[i++]:a[j++];
    while(i<=m)t[k++]=a[i++];
    while(j<=r)t[k++]=a[j++];
    for(i=l,k=0;i<=r;i++)a[i]=t[k++];
}
  void ms(int a[],int l,int r)
  {
    if(l<r)
    {
        int m=(l+r)/2;
        ms(a,l,m);
        ms(a,m+l,r);
        merge(a,l,m,r);
    }
  }
   
   int main(){
   int n,a[100],i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   ms(a,0,n-1);
   for(i=0;i<n;i++)
   printf("%d",a[i]);  
  } 