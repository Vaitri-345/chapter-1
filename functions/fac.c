#include<stdio.h>
int f(int x){
    int f=1,n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        f=f*i;
    }printf("%d",f);
    return f;
}
int main(){
   int y;
   scanf("%d",&y);
   int z=f(y);
   printf("%d",f);
   return 0;
}
    
