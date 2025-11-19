#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int q = sqrt(a);
    int n = pow(a,b);
    printf("%d %d",n,q);
    return 0;

}