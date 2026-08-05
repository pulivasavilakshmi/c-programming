#include <stdio.h>
int main() {
    int n ,i, a, max=INT-MAX, sec=INT-MIN;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a>max){sec=MAX;MAX=a;}
        else if(a>sec && a<MAX) sec=a;
    }
      printf("%d",sec);
    return 0;
}