#include<stdio.h>
int main(){
  char c[100];
  scanf("%[^\n]s",c);
  int i=0,s=0;
  while(c[i]!=0){
     s+=c[i];
     
  }
    printf("%d",s);
}