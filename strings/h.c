#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    system("cls");
    printf("How much elements Your want to Enter: ");
    scanf("%d", &n);
    system("cls");
    int a[n];
    for (int i = 0; i < n; i++){
        printf("Enter your %d/%d num:", i+1, n);
        scanf("%d", &a[i]);
        system("cls");
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    int even_sum=0,odd_sum=0;
    for(int i = 0; i < n; i++){
        if(a[i]%2==0){
            even_sum += a[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i]%2!=0){
            odd_sum += a[i];
        }
    }
    int table,tab[100][10];
    for(int i = 0; i < n; i++){
        table = a[i];
        for(int j = 1; j < 11; j++){
            tab[i][j] = table * j;
            // printf("%d",tab[i][j]);
        }
    }
    system("cls");
    printf("Array is :\n[");
    for (int i = 0; i < n-1; i++){
        printf("%d,", a[i]);
    }
    printf("%d", a[n-1]);
    printf("]");
    printf("\nSum of the element: %d",sum);
    printf("\nSum of Even Number: %d",even_sum);
    printf("\nArray of even number is :\n");
    for(int i = 0; i < n; i++){
        if(a[i]%2==0){
            printf("%d ", a[i]);
            
        }
    }
    printf("\nArray of Odd number is :\n");
    for(int i = 0; i < n; i++){
        if(a[i]%2!=0){
            printf("%d ", a[i]);
            
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 1; j < 11; j++){
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }

}