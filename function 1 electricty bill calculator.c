#include <stdio.h>

float calculateBill(int units)
{
    float bill;

    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = (100 * 1.5) + (units - 100) * 2.5;
    else
        bill = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4.0;

    return bill;
}

int main()
{
    int units;
    float amount;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    amount = calculateBill(units);

    printf("Total Electricity Bill = Rs. %.2f", amount);

    return 0;
}
