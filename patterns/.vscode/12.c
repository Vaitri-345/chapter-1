#include<stdio.h>
int main(){
    int n,i,m,j;
    printf("enter no of rows : ");
    scanf("%d",&n);
    printf("enter no of columns: ");
    scanf("%d",&m);
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            printf("%d",j);
        }printf("\n");
    }
}