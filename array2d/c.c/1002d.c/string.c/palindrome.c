#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int i,l=0,flag=0;
    for(i=0;str[i]!=0;i++){
        l++;
    }for(i=l;i>=0;i--){
        if(str[i]!=str[l-1-i]){
            flag=1;
            break;
        }
    }if(flag==0){
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
}