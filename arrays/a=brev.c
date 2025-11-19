#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b[i]=a[n-1-i];
        printf("%d\t",b[i]);
    }
}