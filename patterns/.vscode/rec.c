#include<stdio.h>
int main(){
    int n,m,i,j;
    printf("enter no of rows : ");
    scanf("%d",&n);
    printf("enter no of columns : ");
    scanf("%d",&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("*");
        }
        printf("\n");
    }
}