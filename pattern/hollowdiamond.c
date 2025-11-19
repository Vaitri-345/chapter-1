#include<stdio.h>
int main(){
    int n,i,j,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf(" ");
        }for(j=1;j<=2*i-1;j++){
            if(i==n||j==2*i-1||j==1){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }for(i=n-1;i>=1;i--){
       for(s=1;s<=n-i;s++){
        printf(" ");       
       }for(j=1;j<=2*i-1;j++){
        if(j==2*i-1||j==1){
            printf("*");    
        }else{
            printf(" ");
        }
    }printf("\n");
}
}