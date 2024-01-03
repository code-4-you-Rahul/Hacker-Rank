#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,d;
    scanf("%d%d",&n,&d);
    int a[n],s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   for(int i=0;i<n;i++){
       s[i] = a[(d+i)%n];
   }
    for(int i=0;i<n;i++){
        printf("%d",s[i]);
        printf("%c",32);
    }
    return 0;
}
