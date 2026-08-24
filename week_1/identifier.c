/*Identifiers are the names to identify variables, functions, operators, 
objects, structs, any objects that defined by C.*/ 
#include <stdio.h>


// creating a variable 
int a = 15;

// creating a function
void function(){}

// creating an integer function
int sum(int a, int b)
{
    return a + b;
}

// Now I will create a identified variable
int main()
{
    /*// Creating an integer variable
    // And assigned it as random_number
    int random_number;

    // Assigned value 12 for random_number
    // Using the variable name which is random_number
    random_number = 12;

    // Refering to the same variable, using assigned name
    printf("%d" ,random_number);*/
    

    // Creating 2 other variables to test the integer function
    int a = 4;
    int b = 8;

    // Putting a and b variable into sum integer function
    printf("The summation of a and b is: ");
    printf("%d", sum(a,b));

    return 0;
} 