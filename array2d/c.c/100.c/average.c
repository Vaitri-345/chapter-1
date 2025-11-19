#include<stdio.h>
int main(){
    int n,i,o;
    float sum =0,av;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("\n");
    for(i=0;i<n;i++){
        sum = sum+a[i];
    }av = sum/n;
    printf("%.2f",av);
}