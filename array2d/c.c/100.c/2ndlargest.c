#include<stdio.h>
int main(){
    int n,i,max,max2;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }max=a[0];
    max2=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        }
        for(i=0;i<n;i++){
            if(a[i]>max2&&a[i]<max){
                max2=a[i];
            }
        }printf("%d",max2);
    }
