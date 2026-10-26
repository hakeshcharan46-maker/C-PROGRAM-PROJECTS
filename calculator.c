#include <stdio.h>
int main() {
    float a;
    float b;
    char ch;

    printf("ENTER BOTH THE NUMBERS : ");
    scanf("%f %f", &a, &b);

    printf("Enter an operator (+ , - , * , /): ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case '+': 
        {
            printf("ADD = %f", a+b);
            break;
        }
        case '-': 
        {
            printf("diff = %f", a-b);
            break;
        }
        case '*': 
        {
            printf("product = %f", a*b);
            break;
        }
        case '/': 
        {
            printf("division = %f", a/b);
            break;
        }
        default:
        {
            printf("Invalid operator");
            break;
        }
    }
    
    return 0;
}