#include<stdio.h>
int main(){
    int n,i,j,max,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            max=a[i][0];
            if(max<a[i][j]){
                max=a[i][j];
               
            }
        }printf("%d ",max);
    }
}