#include<stdio.h>
int main(){
    int n,i,max,smax;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    } smax=a[0];
    for(i=1;i<n;i++){
        if(smax<a[i]&&a[i]!=max){
            smax=a[i];
        }
    }printf("%d",smax);

}
