#include<stdio.h>
int main(){
    int n,i,j,m,max;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }printf("\n");
    
        for(j=0;j<m;j++){
            for(i=0;i<n;i++){
            max=a[0][j];
            if(a[i][j]>max){
                max=a[i][j];
            }
        }printf("%d ",max);
    }
}