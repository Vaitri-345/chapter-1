#include<stdio.h>
int main(){
    int n,i,even=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("\n");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
    }printf("%d",even);
}