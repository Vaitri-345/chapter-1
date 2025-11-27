#include<stdio.h>
int sub(int a,int b){
    return a-b;
}int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int s= sub(a,b);
    printf("%d",s);
}