
#include <stdio.h>

int main()
{
    float weight, height, bodymassindex;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0)
    {
        printf("Invalid input");
    }
    else
    {
        bodymassindex = weight / (height * height);

        printf("Body mass index = %.2f\n", bodymassindex);

        if (bodymassindex < 18.5)
        {
            printf("Underweight");
        }
        else if (bodymassindex < 25)
        {
            printf("Normal");
        }
        else if (bodymassindex < 30)
        {
            printf("Overweight");
        }
        else
        {
            printf("Obese");
        }
    }

    return 0;
}
