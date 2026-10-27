#include <stdio.h>

int main()
{
    float amount, discount = 0, delivery = 0, finalAmount;
    int membership;

    printf("Enter order amount: ");
    scanf("%f", &amount);

    printf("Enter membership type (1 for Premium, 0 for Regular): ");
    scanf("%d", &membership);

    if (amount >= 500)
    {
        delivery = 0;

        if (membership == 1)
        {
            discount = amount * 0.10;
        }
    }
    else
    {
        delivery = 50;
        discount = 0;
    }

    finalAmount = amount - discount + delivery;

    printf("Final payable amount = Rs. %.2f\n", finalAmount);

    return 0;
}