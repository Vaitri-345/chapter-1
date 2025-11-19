#include<stdio.h>
int main(){
    int i,n,j,m;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("*");
        }printf("\n");
    }
}