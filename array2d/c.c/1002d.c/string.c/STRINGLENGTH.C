#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int i=0;
    while(str[i]!='\0'){
    i++;
    }printf("%d",i);

}