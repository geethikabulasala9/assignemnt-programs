#include <stdio.h>

int main() {
    float order_amount, final_amount;
    int membership_type;
    float discount = 0.0;
    float delivery_charge = 0.0;

    printf("Enter order amount: ");
    scanf("%f", &order_amount);
    printf("Enter membership type (1 for premium, 0 for regular): ");
    scanf("%d", &membership_type);

    if (order_amount >= 500) {
        if (membership_type == 1) {
            discount = 0.10 * order_amount; 
        }
        delivery_charge = 0.0; 
    } else {
        delivery_charge = 50.0; 
    }

    final_amount = order_amount - discount + delivery_charge;
    printf("The final amount to pay is: %.2f\n", final_amount);

    return 0;
}
