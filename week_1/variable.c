#include <stdio.h>

int main(void)
{
    // These variables which have been declared are initial value 
    // The process is call initialization. It's done by assignment operator "="
    
    // integer variable
    int integer = 6;

    // floating-point variable
    float floating_point = 6.7;

    // character variable
    char student_grade = 'A';
    

    // Now we will print out all 3 variables that have been assigned
    printf("Random integer number: %d\n", integer);
    printf("Random floating number: %.1f\n", floating_point);
    printf("Highest student grade: %c\n", student_grade);

    // To print 2 different types of varible at the same time, we do:
    printf("%d\n%.1f", integer, floating_point);

    // Don't forget return 0 to return the result of the whole main int
    return 0;
}