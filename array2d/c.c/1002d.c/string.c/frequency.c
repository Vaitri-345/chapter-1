#include<stdio.h>
int main(){
    int count=0;
    char str[100];
    scanf("%[^\n]s",str);
    char ch ;
    scanf(" %c",&ch);
    int i=0;
    while(str[i]!=0){
        if(str[i]==ch){
            count++;
        }i++;
       
    }printf("%d ",count);
}