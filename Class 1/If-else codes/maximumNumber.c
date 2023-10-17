#include<stdio.h>

int main()
{
    int number1, number2, number3;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    printf("Enter the third number: ");
    scanf("%d", &number3);
    if(number1 > number2 && number1 > number3)
    {
        printf("%d is the maximum number", number1);
    }
    else if(number2 > number1 && number2 > number3)
    {
        printf("%d is the maximum number", number2);
    }
    else
    {
        printf("%d is the maximum number", number3);
    }
    return 0;
}


/*
    pseducode:
        1. Start
        2. Take three numbers
        3. Check the first number is greater than second and third number
        4. If the first number is greater than second and third number
        5. Print the first number is maximum
        6. Else if the second number is greater than first and third number
        7. Print the second number is maximum
        8. Else
        9. Print the third number is maximum
        10. End



*/