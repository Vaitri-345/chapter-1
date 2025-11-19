#include<stdio.h>
int main(){
    int num1[3],num2[3],mer[100],n=2,m=2;
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
    int temp;
        for(int i=0;i<m+n-1;i++){
        for(int j=0;j<m+n-i-1;j++){
            if(mer[j] > mer[j+1]){  
                int temp = mer[j];
                mer[j] = mer[j+1];
                mer[j+1] = temp;
            }
        }
    }
    int t = m+n;
    if(t % 2 == 0){
        int mid = t/2;
        float med = (mer[mid] + mer[mid-1]) / 2.0;
        printf("%f", med);
    } else {
        int mid = t/2;
        printf("%d", mer[mid]);
    }

}