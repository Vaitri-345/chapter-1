#include<stdio.h>
#include<string.h>
int main(){
    int words=1;
    char s[100];
   
    scanf("%[^\n]s",s);
    int i=0;
    while(s[i]!='\0'){
      if(s[i]==' '){
           words++;
      }i++;
    }
     printf("%d",words);
     
}