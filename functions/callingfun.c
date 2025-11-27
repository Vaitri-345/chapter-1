#include<stdio.h>
void i(){
    printf("you ");
}void j(){
    printf("are ");
    i();
}void k(){
    printf("how ");
    j();
}int main(){
    printf("hello ");
    k();
}
    
