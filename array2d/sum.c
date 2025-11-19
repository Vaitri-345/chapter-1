#include<stdio.h>
int main(){
    int n,i,j,m,sum=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            sum= sum+a[i][j];
       
        }printf("\n");
         
    }for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d",sum);
        }printf("\n");
    }
}