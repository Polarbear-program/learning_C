#include <stdio.h>

int main()
{
    // Variable assigning: These are data types of C
    int items; //Specifier is: "%d", "%i"
    float grade; //Specifier is: "%f", "%F"
    double quantity; //Specifier is: "%lf""
    char letterCode; //Specifier is: "%c"

    // Value assigning
    items = 5;
    grade = 4.5;
    letterCode = 'C';

    // Print value
    printf("%d\n", items);
    printf("%f\n", grade);
    printf("%c\n", letterCode);
}