#include <stdio.h>

int sub(int a,int b){
    return a - b ;
}

int main(){
    int a,b;
    printf("Enter value of a is: ");
    scanf("%d",&a);
    printf("Enter value of b is: ");
    scanf("%d",&b);
    printf("This %d and %d value of sub is: %d",a,b,sub(a,b));
    
    return 0;

}
