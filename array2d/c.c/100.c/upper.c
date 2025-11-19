#include<stdio.h>
int main(){
    int n,i,j,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
            if(i==j){
                printf("%d",a[i][j]*a[i][j]);
            }
        }
    }
    }
    
}