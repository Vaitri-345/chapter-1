#include<stdio.h>
int main(){
    int n,i,j,count =0;
    printf("enter size of elements : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        printf("enetr integer : ");
        scanf("%d",&j);
        
        for(i=0;i<n;i++){
        if(a[i]>j){
            count++;
    }
}printf("%d",count);
}