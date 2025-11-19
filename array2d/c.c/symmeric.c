#include<stdio.h>
int main(){
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }printf("\n");
    int s=1;
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
      if(a[j][i]!=a[i][j]){
        s=0;
      }break ;
      }
    }if(s==1){
        printf("symmetric");
    }else{printf("not symmetric");}
    
    return 0;
}