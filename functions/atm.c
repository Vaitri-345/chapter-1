#include<stdio.h>
#include<stdlib.h>
char name;
int i=0,islogin=0;
void atm(char *name,int bal);
int deposit(int bal);
int withdrawl(int bal);
int home(){
    int pin;
    system("cls");
    printf("\t\t\t\tATM\n");
    printf("\t\t||Welcome to Vaibhav Bank of INDIA||\n");
    printf("\t\t\tEnter your pin: ");
    scanf("%d",&pin);
    return pin;
}
int check(int pin){
    char name;
    if(pin==1234){
        islogin=1;
        return islogin;
    }
    else if (pin==9761)
    {
        islogin=2;
        return islogin;
    }
    else{
        islogin=0;
        return islogin;
    }
    

}
void atm(char *name,int bal){
    int n;
    system("cls");
    printf("\t\t\t\tATM\n");
    printf("\t\t||Welcome to Vaibhav Bank of INDIA||\n");
    printf("Hello %s\n",name);
    if(i==1){
        printf("\t%s your Balance is %d\n",name,bal);
    }else{
        printf("\t1.Check Balance\n");
    }
    printf("\t2.Deposit\n");
    printf("\t3.Withdrawl\n");
    printf(": ");
    scanf("%d",&n);
    if(n==1){
        system("cls");
        i=1;
        atm(name,bal);
    }
    else if (n==2)
    {
        i=2;
        bal = deposit(bal);
        atm(name,bal);
    }
    else if(n==3){
        i=3;
        bal = withdrawl(bal);
        atm(name,bal);
    }
    
}
int deposit(int bal){
    int temp;
    system("cls");
    printf("\tEnter Amount You want to deposit: ");
    scanf("%d",&temp);
    return bal+temp;
}
int withdrawl(int bal){
    int amount=0;
    if(check(home())){
        printf("\tEnter Your Amount: ");
        scanf("%d",&amount);
        if(amount<bal){
            return bal-amount;
        }
        else{
            printf("Insufficient Balance!!");
            main();
        }
    }
    else{
        printf("Wrong PIN!\n");
        system("pause");
    }
}

int main(){
    int pin = home();
    int user = check(pin);
    if(user==1){
        atm("Vaibhav",3000);
    }
    else if (user==2){
        atm("Abhiyank",7000);
    }
    else{
        printf("Wrong PIN!\n");
    }
    
}
