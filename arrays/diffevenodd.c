#include<stdio.h>
int main(){
    int n,i,sum=0,add=0,diff;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
        if(i%2==0){
            sum = sum+a[i];
        }
        if(i%2!=0){
            add = add+a[i];
        }
    }diff= sum-add;
    printf("%d",diff);
}