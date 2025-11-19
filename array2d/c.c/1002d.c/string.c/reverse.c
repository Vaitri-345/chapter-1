#include<stdio.h>
#include<string.h>
int main(){
    int j,f=1;
    char str[100];
    scanf("%[^\n]s",&str);
    int l=strlen(str);

    for(int i=l-1;i>=0;i--){
        printf("%s",str[i]);
    }
}