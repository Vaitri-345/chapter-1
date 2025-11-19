#include<stdio.h>
int main(){
    int n,i,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("\n");
    min=a[0];
    int min2=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min = a[i];
        }
    }for(i=0;i<n;i++){
        if(min2>a[i]&&a[i]<min){
            min2=a[i];
        }
    }printf("%d",min2);
}