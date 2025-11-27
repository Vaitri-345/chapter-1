#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%[^\n]s",s);
    int n=strlen (s);
    int i,count=0;
    for(i=0;i<=n-3;i++){
        char a=s[i];
        char b=s[i+1];
        char c=s[i+2];
        if(a!=b&&a!=c&&b!=c){
            printf("%c\n",strcat(a,strcat(b,c)));
        }
    }
}