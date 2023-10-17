#include<stdio.h>

int main()
{
    int unit;
    float amount, total_amount, surcharge;
    printf("Enter the unit: ");
    scanf("%d", &unit);
    if(unit <= 250)
    {
        amount = unit * 10;
    }
    else if(unit > 250 && unit <=300)
    {   

        amount =(250 * 10) + ((unit - 250) * (10 + 10 * 0.10));
    }
    else
    {
        amount = (250 * 10) + (50 * (10 + 10 * 0.10)) + ((unit - 300) * (10 + 10 * 0.20));
    }

   
    printf("The total amount is: %f", amount);
    return 0;
}

// 1. Start
// 2. Take the unit
// 3. Check the unit
// 4. If unit <= 250
// 5. Calculate the amount
// 6. Else if unit > 250 and unit <= 300
// 7. Calculate the amount
// 8. Else
// 9. Calculate the amount
// 10. Print the amount
// 11. End