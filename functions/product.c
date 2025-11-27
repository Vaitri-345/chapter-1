#include<stdio.h>
int product(int a,int b){
    return a*b;
}int main(){
    int a,b;
    scanf("%d%d",&a,&b);
   int  pro=product(a,b);
   printf("%d",pro);
}