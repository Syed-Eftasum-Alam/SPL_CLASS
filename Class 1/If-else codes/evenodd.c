#include<stdio.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if(number % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}


/*
    pseducode:
        1. Start
        2. Take a number
        3. Check the number is even or odd
        4. If the number is even
        5. Print the number is even
        6. Else
        7. Print the number is odd
        8. End


*/