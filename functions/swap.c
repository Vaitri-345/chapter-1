#include<stdio.h>
void swap(){
    int t,a,b;
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("%d %d\n",a,b);
}
int main(){
   swap();
}