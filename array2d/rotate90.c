#include<stdio.H>
int main(){
    int n,i,j,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);

        }printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=n-1;j>=0;j--){
            printf("%d ",a[j][i]);
        }printf("\n");
    }
}