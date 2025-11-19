#include<stdio.h>
int main(){
    int n,i,j,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }int b[n][m];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          b[i][j]=a[j][i];
        }
    }for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d ",b[i][j]);
        }printf("\n");
    }

}