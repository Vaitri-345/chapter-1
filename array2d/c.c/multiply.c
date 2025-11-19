#include<stdio.h>
int main(){
    int n,m,p,q,i,j,k;
    scanf("%d%d%d%d",&n,&m,&p,&q);
    int a[n][m],b[p][q],c[n][q];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }printf("\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            c[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            for(k=0;k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            printf("%d ",c[i][j]);
        }printf("\n");
    }
    return 0;
}