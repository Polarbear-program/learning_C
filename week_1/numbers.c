#include <stdio.h>

int main()
{
    // Assigning variables for integer
    int age, quantity, amount;
    
    // Assigning variables for float
    float height, weight, width;

    // In C you can write very large, or very small floating-point
    // Using scientific notation, using the letter e or E
    width = 34e4; // 34 * 10^4 = 340000.000000
    weight = 65E6; // 65 * 10^6 = 65000000.000000
    height = 6e-4; // 6 * 10^-4 = 0.00600

    // Now print out the value assigned
    printf("%f\n", width);
    printf("%f\n", weight);
    printf("%f\n", height);

    // Decimal precision, to remove the extra zeros, you can use a dot(.)
    // followed by a number that specifies how many digits that shown
    
    printf("\n","__________________");
    printf("%.f\n", weight); // No digit shown
    printf("%f\n", weight); // Default setting will show 6 digits
    printf("%.1f\n", weight); // Only show 1 digit
    printf("%.2f\n", weight); // Only show 2 digits
    return 0;
}