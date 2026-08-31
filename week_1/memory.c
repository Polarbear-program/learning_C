#include <stdio.h>

    // Why shoupld I know the size of Data Types
    // Knowing the memory of data types can help you write big program
    // or working in a limited memory, because it can affect both
    // Performance and Efficiency

int main()
{
    // Assign variables
    int integer;
    float float_number;
    double longer_float;
    char character;

    // Using "%zu" format specifier will print out the memory size of variable
    // Using the sizeof() operator to get the size(bytes) of data type of variable

    printf("Memory of integer: %zu\n", sizeof(integer)); // Size of memory taken by interger: 4
    printf("Memory of floating-point: %zu\n", sizeof(float_number)); // Size of memory taken by float-point: 4
    printf("Memory of double: %zu\n", sizeof(longer_float)); // Size of memory taken by double: 8
    printf("Memory of character:%zu\n", sizeof(character)); // Size of memory taken by character: 1

    return 0;
}