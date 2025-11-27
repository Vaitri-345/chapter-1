#include<stdio.h>
int fact(int x){
    int f=1,i;
    for(i=1;i<=x;i++){
        f=f*i;
    }return f;
}int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    float ncr=fact(n)/((fact(r))*(fact(n-r)));
    printf("%f",ncr);
}