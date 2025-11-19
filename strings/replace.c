#include<stdio.h>
int main(){
    char str[20]="hello world";
    str[1]='j';
    str[2]=98;
    int i=0;

    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }

}