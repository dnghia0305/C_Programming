#include <stdio.h>

int Calculator(char *Expression, int *firstNumber, int *secondNumber);

int main()
{
    char Expression;
    int firstNumber, secondNumber;
    printf("Enter the expression: ");
    scanf("%c", &Expression);
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    char *exPtr     = &Expression;
    int  *firstPtr  = &firstNumber;
    int  *secondPtr = &secondNumber;
    Calculator(exPtr, firstPtr, secondPtr);

    return 0;
}

int Calculator(char *Expression, int *firstNumber, int *secondNumber)
{
    switch(*Expression){
        case '+':
            printf("The sum of two numbers is: %d", *firstNumber + *secondNumber);
            return 0;
        case '-':
            printf("The sum of two numbers is: %d", *firstNumber - *secondNumber);
            return 0;
        case '*':
            printf("The sum of two numbers is: %d", *firstNumber * *secondNumber);
            return 0;
        case '/':
            if(*firstNumber == 0 || *secondNumber == 0)
            {
                printf("Devide for zero");
                return -1;
            }
            else
            {
                printf("The sum of two numbers is: %.4f", (float)*firstNumber / (float)*secondNumber);
                return 0;
            }
        default:
            printf("Wrong Expression");
            return -1;
    }
    return 0;
}