#include<stdio.h>
int main(){
    int n,i,pos=0,neg=0,zero=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("\n");
    for(i=0;i<n;i++){
        if(a[i]>0){
        pos++;}
        else if(a[i]<0){
            neg++;
        }
        else if(a[i]==0){
            zero++;
        }
        }
      printf("pos = %d\n",pos);
      printf("neg = %d\n",neg);
      printf("zero = %d\n",zero);
        

    }
