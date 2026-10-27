#include <stdio.h>

int main() {
    int mark;

    printf("Enter mark (out of 100): ");
    scanf("%d", &mark);
    if (mark < 0 || mark > 100) {
        printf("Invalid mark\n");
    }
    
    else if (mark >= 90 && mark <= 100) {
        printf("Grade: O\n");
    }
    // Grade A+ for marks from 80 to 89
    else if (mark >= 80 && mark <= 89) {
        printf("Grade: A+\n");
    }

    return 0;
}
    