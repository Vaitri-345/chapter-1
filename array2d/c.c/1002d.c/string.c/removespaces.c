#include<stdio.h>
int main(){
    char s[100];
    scanf("%[^\n]",s);
    int i=0;
    while(s[i]!=0){
        if(s[i]!=' '){
            printf("%c",s[i]);
        }i++;
    }
}