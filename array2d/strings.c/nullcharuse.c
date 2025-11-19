#include<stdio.h>
int main(){
    char a[]="hello world how are you";
    int i=0;
    while(a[i]!='\0'){
        printf("%c",a[i]);
        i++;
    }
}