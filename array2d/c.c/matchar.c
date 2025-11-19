#include<stdio.h>
int main(){
    int n,i,j,m;
    scanf("%d%d",&n,&m);
    char a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=m-1;j>=0;j--){
            printf("%c ",a[i][j]);
        }  
        printf("\n");
    }
}