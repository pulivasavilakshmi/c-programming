#include<stdio.h>

void qs(int a[],int l,int h){
    int i=l,j=h,p=a[(l+h)/2],t;
    while(i<=j){
        while(a[i]<p) i++;
        while(a[j]>p) j--;
        if(i<=j){
            t=a[i]; a[i]=a[j]; a[j]=t;
            i++; j--;
        }
    }
    if(l<j) qs(a,l,j);
    if(i<h) qs(a,i,h);
}

int main(){
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    qs(a,0,n-1);
    for(i=0;i<n;i++) printf("%d ",a[i]);
}
