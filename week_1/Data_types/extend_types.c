#include <stdio.h>

int main()
{
    int normalInt = 3600; // standard integer
    double normalDouble = 3.14; // standard double

    short int small = -400; // smaller integer for lesser memory taken
    unsigned int no_negative = 50000; // No negative number for unsigned int
    long int big_number = 1234567890; // Very large integer
    long long int huge_number = 10E8;  // A larger integer that doesn't contain negative

    // The biggest integer ever recorded lol
    unsigned long long int giant_number = 100000000015U; 
    long double precise = 3.141592653589793238L; // Extended precision

    // Print out value for each extended types
    printf("Normal integer: %d\n",normalInt);
    printf("Normal double: %d\n",normalDouble);
    printf("Small integer: %hd\n",small);
    printf("Unsigned integer: %u\n",no_negative);
    printf("Bigger integer: %ld\n",big_number);
    printf("The biggest integer: %lld\n",huge_number);
    printf("The giant unsigned integer: %llu\n",giant_number);
    printf("Long double: %Lf\n",precise);

    // Print out memory of each extended types
    return 0;
}