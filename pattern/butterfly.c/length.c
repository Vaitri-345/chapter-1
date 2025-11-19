#include<stdio.h>
int main(){
    char s[10];
    scanf("%[^\n]",s);
    int i=0,l=0;
    while(s[i]!='\0'){
        l++;
    }printf("%d",l);
}