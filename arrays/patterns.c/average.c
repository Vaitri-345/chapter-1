#include<stdio.h>
int main(){
    int n,i;
    float s=0,av;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("\n");
    for(i=0;i<n;i++){
       s=s+a[i];
    }
    av = s/n;
    printf("%.2lf",av);
}