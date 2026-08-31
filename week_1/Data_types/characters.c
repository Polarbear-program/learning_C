#include <stdio.h>

int main()
{
    // Assigning characters and value for each
    char a = 65, b = 66, c = 67;

    printf("%c\n", a); //Output: A
    printf("%c\n", b); //Output: B
    printf("%c\n", c); //Output: C

    // char datatype of C is strictly only allowed to store 1 specific characters
    char less = 'This will only print out the first char, which is T';
    printf("%c",less);

    return 0;
}