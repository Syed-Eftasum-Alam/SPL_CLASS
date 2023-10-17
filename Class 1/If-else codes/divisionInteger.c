#include<stdio.h>
int main()
{
    int variable1, variable2;
    float division;
    printf("Enter the first number: ");
    scanf("%d", &variable1);
    printf("Enter the second number: ");
    scanf("%d", &variable2);
    division =(float)variable1 / variable2;
    printf("The division of %d and %d is: %f", variable1, variable2, division);
    return 0;
}


/*
    pseducode:
        1. Start
        2. Take two integer variable
        3. Take a float variable (for storing the result)
        4. Divide the first variable by second variable
        5. Print the result
        6. End

*/