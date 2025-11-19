#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(a[i]==k){
            p=i;
            break;
        }
    }
    for(int i=p;i<n;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
}