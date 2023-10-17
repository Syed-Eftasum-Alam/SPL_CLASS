#include<stdio.h>

int main()
{
   int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
    printf("%d is a leap year.\n", year);
    } else 
    {
    printf("%d is not a leap year.\n", year);
    }
    return 0;
}

/*

    pseducode:
        1. Start
        2. Take a year
        3. Check the year is leap year or not
            if the year is divisible by 400 then
                leap year
            else if the year is divisible by 4 and not divisible by 100 then
                leap year
            else
                not leap year

        4. If the year is leap year
        5. Print the year is leap year
        6. Else
        7. Print the year is not a leap year
        8. End

*/