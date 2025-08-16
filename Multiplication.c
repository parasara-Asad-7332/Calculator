#include <stdio.h>

int Mul(int a,int b){
    return a * b ;
}

int main(){
    int a,b;
    printf("Enter value of a is: ");
    scanf("%d",&a);
    printf("Enter value of b is: ");
    scanf("%d",&b);
    printf("This %d and %d value of Mul is: %d",a,b,Mul(a,b));
    
    return 0;
}