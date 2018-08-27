package com.kyledjohnson;

public class Main {

    public static void main(String[] args) {

        // width of int = 32 (4 bytes)
        int myIntValue = 5 / 3;

        // width of float = 32 (4 bytes)
        float myFloatValue = 5f / 3f;     // Put an 'f' at the end to denote a float

        // width of double = 64 (8 bytes) - twice the memory, but should be used most of the time
        //                                - Why?
        //                                  1. faster on most systems
        //                                  2. more precise
        //                                  3. most in-built functions use double
        double myDoubleValue = 5d / 3d;   // Put 'd', or just a decimal value, and java assumes it's a double

        System.out.println("myIntValue = " + myIntValue);
        System.out.println("myFloatValue = " + myFloatValue);       // 7 digits after decimal
        System.out.println("myDoubleValue = " + myDoubleValue);     // 16 digits after decimal (more precise)
                                                                    // double is default if you dont use d or f


        // Challenge:
        // Convert a given number of pounds to kilograms
        // 1. Create a variable to store the number of pounds
        // 2. Calculate the number of kilograms for the number above, and store in a variable
        // 3. Print out the result

        // NOTE: 1 pound is equal to 0.45359237 kilograms

        double pounds = 10d;
        double kilos = (pounds * 0.453_592_37d);
        System.out.println("Pounds = " + pounds);
        System.out.println("Kilograms = " + kilos);

        // ******************************

    }
}
