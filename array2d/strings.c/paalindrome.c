#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",&str);
    int i,l=0,flag=0;
    for(i=0;str[i]!='\0';i++){
       l++;
    }
    for(i=l;i>=0;i--)
    if(str[i]!=str[l-i-1]){
        flag=1;
        break;
    }
    if(flag==0){
        printf("yes");

    }else{printf("no");}
}