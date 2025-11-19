#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }else if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }printf("%c",str[i]);
        i++;
    }
}