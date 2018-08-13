/* CS261- Assignment 1 - Q.0*/
/* Name: Kyle Johnson
 * Date: 06/27/2018
 * Solution description: This is an exercise on the use of pointers in C.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Function that takes a pointer, prints the value and address that the pointer
// is pointing at, increments the value being pointed at by 5, and then prints
// the address of the pointer, itself
void fooA(int* iptr){

    /*Print the value and address of the integer pointed to by iptr*/
    printf("Value of iptr: %d\n", *iptr);                   // should be the same as x in main
    printf("Address pointed to by iptr: %d\n", iptr);

    /*Increment the value of the integer pointed to by iptr by 5*/
    *iptr += 5;

    /*Print the address of iptr itself*/
    printf("Address of iptr: %d\n\n", &iptr);
}

// Function that takes a pointer, prints the value and address that the pointer
// is pointing at, decrements the address of the pointer by 1, and then prints
// the address of the pointer, itself
void fooB(int* jptr){

    /*Print the value and address of the integer pointed to by jptr*/
    printf("Value of jptr: %d\n", *jptr);
    printf("Address pointed to by jptr: %d\n", jptr);

    /*Decrement jptr by 1*/
    jptr -= 1;

    /*Print the address of jptr itself*/
    printf("Address of jptr: %d\n\n", &jptr);

}

// Main function of the program
int main(){

    /*Declare an integer x and initialize it randomly to a value in [0,10]*/
    int x = rand() % 11;

    /*Print the value and address of x*/
    printf("\nValue of x (before fooA(&x)): %d\n", x);
    printf("Address of x: %d\n", &x);

    /*Call fooA() with the address of x*/
    printf("\nCalling fooA(&x)...\n");
    fooA(&x);

    /*Print the value of x*/
    printf("Value of x (after fooA(&x)): %d\n", x);

    /*The value of x has changed. This is because the last line in fooA (*iptr += 5) dereferences iptr so that
     *the value that it's pointing to can be changed and incremented by 5.*/

    /*Call fooB() with the address of x*/
    printf("\nCalling fooB(&x)...\n");
    fooB(&x);

    /*Print the value and address of x*/
    printf("Value of x (after fooB(&x)): %d\n", x);
    printf("Address of x: %d\n", &x);

    /*The value and address of x have not changed. This is because the decrementing that occurs within fooB is
     *only changing the address of jptr, itself, and doesn't affect the address it's pointing at or the value there.*/

    return 0;
}



