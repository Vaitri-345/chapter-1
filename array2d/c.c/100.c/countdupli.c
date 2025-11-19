#include<stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("\n");
    int x;
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(x==a[i]){
            count++;
        }
    }printf("%d",count);


}