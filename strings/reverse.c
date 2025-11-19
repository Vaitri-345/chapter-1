#include<stdio.h>
#include<string.h>

int main(){
    char str [50];
    scanf("%[^\n]s",&str);
    int i=0;
    
    while(str[i]!=0){
        i++;
    }for(int j=i-1;j>=0;j--){
        printf("%c",str);
    }

}