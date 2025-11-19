#include<stdio.h>
int main(){
    int n,i,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("\n");
   t=a[0];
   a[0]=a[n-1];
   a[n-1]=t;

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}