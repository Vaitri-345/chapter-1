#include<stdio.h>
int main(){
      int n,i,j,p,k;
      scanf("%d",&n);
      int a[n];
      for(i=0;i<n;i++){
        scanf("%d",&a[i]);
      }scanf("%d",&k);
     for(i=0;i<n;i++){
        if(a[i]==k){
            p=i;
        }
     } for(i=p;i<n;i++){
        a[i]=a[i+1];
     }for(i=0;i<n-1;i++){
        printf("%d",a[i]);
     }
}