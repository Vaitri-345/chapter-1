#include<stdio.h>
int main(){
    int n,i,f=1,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("\n");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(x==a[i]){
            f=1;
        }
    }if(f==1){
        printf(" present");
    }else{printf("not present");}
}