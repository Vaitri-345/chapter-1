#include<stdio.h>
int main(){
    int n,i,x,found=0;
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(x == a[i]){
            found = 1;   // mark found
            break;       // stop checking further
        }
    }

    if(found == 1)
        printf("present");
    else
        printf("not present");

    return 0;
}
