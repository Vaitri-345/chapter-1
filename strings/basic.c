#include<stdio.h>
int main(){
    char ch[]="hello world\0";
    int i=0;
    while(ch[i]!='\0'){
        printf("%c",ch[i]);
        i++;
    }
}