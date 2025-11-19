#include<stdio.h>
int main(){
    int num1[100],num2[100],mer[100],n=3,m=3;
    for(int i=0;i<n;i++){
        scanf("%d",&num1[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&num2[i]);
    }
    int k = 0;
    for(int i=0; i<n; i++){
        mer[k] = num1[i];
        k++;
    }

    for(int i=0; i<m; i++){
        mer[k] = num2[i];
        k++;
    }
    for(int i=0;i<n+m;i++){
        printf("%d",mer[i]);
    }
}