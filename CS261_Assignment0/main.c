/********************************************************************
 * Author:          Kyle D. Johnson - CS 261 - Summer 2018
 * Date Created:    06/23/2018
 * Last Modified:   06/23/2018
 * File Name:       ../CS261_Assignment0/main.c
 *
 * Overview: This program has three hard-coded triangle side lengths
 * that are used to calculate the area of the triangle via
 * Herron's Formula (see the calcArea function).
 *
 * Input: None
 *
 * Output: The triangle side lengths and the calculated area are
 * printed to the console:
 *
 * Side A = 2.000000
 * Side B = 3.000000
 * Side C = 4.000000
 * Area   = 2.904737
 *******************************************************************/

#include <stdio.h>
#include <math.h>

// calcArea function prototype
float calcArea(float, float, float);

int main() {
    float sideA = 2.0;
    float sideB = 3.0;
    float sideC = 4.0;
    double area = calcArea(sideA, sideB, sideC);

    printf("\nCalculating area of a triangle using Herron's Formula...\n");
    printf("Side A = %f\n", sideA);
    printf("Side B = %f\n", sideB);
    printf("Side C = %f\n", sideC);
    printf("Area   = %f\n", area);

    return 0;
}

// Function to return the area of a triangle given the length of the three sides
// Uses Herron's formula: area = sqrt(s(s-a)(s-b)(s-c)), where s = (a+b+c)/2
float calcArea(float a, float b, float c){
    float semiP = ((a + b + c)/2);  // semiperimeter of the triangle
    return (sqrt(semiP*(semiP-a)*(semiP-b)*(semiP-c)));
}


