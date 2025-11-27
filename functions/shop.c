#include<stdio.h>
#include<stdlib.h>

int p=0,b=0,m=0,r=0,f=0;
int total();
void menu(){
    int n;
    system("cls");
    printf("**********MENU**********\n");
    printf("S.N.\tItem\tPrice\tQuantity\n");
    printf("1.\tPizza\t199\t%d\n",p);
    printf("2.\tBurger\t79\t%d\n",b);
    printf("3.\tMomo\t99\t%d\n",m);
    printf("4.\tRoll\t49\t%d\t\tTotal\n",r);
    printf("5.\tFinger\t59\t%d\t\t%d\n",f,total());
    printf("Choose one of these: ");
    scanf("%d",&n);
    system("cls");
    if(n==1)
    {
        p++;
        menu();
    }
    else if (n==2)
    {
        b++;
        menu();
    }
    else if (n==3)
    {
        m++;
        menu();
    }
    else if (n==4) 
    {
        r++;
        menu();
    }
    else if (n==5)
    {
        f++;
        menu();
    }
}
int total(){
    int t=0;
    t=(p*199)+(b*79)+(m*99)+(r*49)+(f*59);
    return t;
}
int main(){
    menu();
}