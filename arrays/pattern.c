#include<stdio.h>
int main(){
    int n,i,max,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }max=a[0];
    for(i=0;i<n;i++)
    {if(max<a[i]){
        max=a[i];
    }}s=a[0];
    for(i=0;i<n;i++){
        if(s<a[i]&&a[i]!=max){
            s=a[i];
        }
    }printf("%d",s);
        
}