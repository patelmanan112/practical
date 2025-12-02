#include <stdio.h>
int main()
{

    int a;
    int b;
    char c;
    // taking the input for two number to operat with
    printf("Enter two value of a : ");
    scanf("%d ", &a);
    printf("Enter two value of b : ");
    scanf("%d ", &b);
    // taking the input that which operation has to operate with two numbers
    printf("enter the operator : ");
    scanf("%c", &c);
    switch (c)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    case '%':
        printf("%d", a % b);

    default:
        break;
    }
    return 0;
}