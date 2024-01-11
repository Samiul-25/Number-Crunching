#include <stdio.h>
#include <math.h>

int main() {
    int upper_limit, sum, i, original_number, digit;

    printf("Enter the upper limit: ");
    scanf("%d", &upper_limit);

    printf("\n\n\nThe Armstrong numbers in between 1 to %d are : \n\n\n", upper_limit);

    for (i = 1; i <= upper_limit; i++) {
        original_number = i;  // Preserve the original number
        sum = 0;

        // Calculate the sum of cubes of digits
        while (original_number != 0) {
            digit = original_number % 10;
            sum +=digit*digit*digit;
            original_number /= 10;
        }

        // Check if the number is an Armstrong number
        if (sum == i)
            printf("\n\t\t\t%d", i);
    }

    return 0;
}
