//this is for main diagonal

#include<stdio.h>
int main(){
    int n,i,j,m,s=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }for(i=0;i<n;i++){
        
            s= s+a[i][i];
        
    }printf("%d",s);
}