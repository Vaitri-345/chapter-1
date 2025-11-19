#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);                        
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2==0){
            a[i]=a[i]+10;
        }else if(i%2!=0){
            a[i]=a[i]*2;
        }
    }for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
