#include<stdio.h>
#include<string.h>

int main(){
    int count=0,cons=0,i;
    char ch[100];
    scanf("%[^\n]", ch);
    int l=strlen(ch);
    for(i=0;i<=l;i++){
        char c=ch[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                count++;
            }
            else{
                cons++;
            }
    }
}
printf("%d %d",count,cons);
}