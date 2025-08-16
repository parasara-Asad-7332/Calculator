#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b;
    printf("Enter a is: ");
    scanf("%d", &a);
    printf("Enter b is: ");
    scanf("%d", &b);
    char opretar;
    printf("Enter your opretar(+,-,*,/): "); // sum +,sub -, Mul * and div / Enter
    scanf(" %c", &opretar);

    switch (opretar)
    {
    case '+':
        printf("Your sum answer is: %d", sum(a, b));
        break;
    }
    switch (opretar)
    {
    case '-':
        printf("Your sub answer is: %d", sub(a, b));
        break;
    }
    switch (opretar)
    {
    case '*':
        printf("Your mali answer is: %d", mul(a, b));
        break;
    }
    switch (opretar)
    {
    case '/':
        printf("Your div answer is: %d", div(a, b));
        break;
    }

    return 0;
}