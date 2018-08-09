/* CS261- Assignment 1 - Q.2*/
/* Name: Kyle Johnson
 * Date: 06/25/2018
 * Solution description: This is an exercise on the use of pointers within functions in C.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to swap the address stored in the a and b pointer,
// decrement the value of c, and return that value
int foo(int* a, int* b, int c){
    /*Swap the addresses stored in the pointer variables a and b*/
    int* temp = a;
    a = b;
    b = temp;

    /*Decrement the value of integer variable c*/
    c--;

    /*Return c*/
    return c;
}

// Main function of the program
int main(){
    srand(time(NULL));

    /* Declare three integers x,y and z and initialize them randomly to values in [0,10] */
    int x = rand() % 11;
    int y = rand() % 11;
    int z = rand() % 11;

    /* Print the values of x, y and z */
    printf("\nBefore foo(&x, &y, z) is called:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    /* Call foo() appropriately, passing x,y,z as parameters */
    int returnedVal = foo(&x, &y, z);

    /* Print the values of x, y and z */
    printf("\nAfter foo(&x, &y, z) is called:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    /* Print the value returned by foo */
    printf("\nfoo(&x, &y, z) returned: %d\n\n", returnedVal);

    return 0;
}

// QUESTIONS:
// Is the return value different than the value of integer z? Why or why not?
//      Yes, it's different. That's because the function returns the decremented value,
//      but z, itself, isn't changed, because we only changed it locally, within the fuction.

// Are the value of integers x and y different before and after calling foo()? Why or why not?
//      The values of x and y do not change after the call to foo(). This is because we changed
//      the values stored in the pointers (which are addresses) locally within the function.
//      Since C is pass by value only, those changes are not reflected in main().


