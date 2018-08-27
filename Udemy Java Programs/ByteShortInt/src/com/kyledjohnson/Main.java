package com.kyledjohnson;

public class Main {

    public static void main(String[] args) {

//        // int has a width of 32
//        int myMinValue = -2_147_483_648;
//        int myMaxValue = 2_147_483_647;
//        int myTotal = (myMinValue/2);
//        System.out.println("myTotal = " + myTotal);
//
//        // byte has a width of 8
//        byte myMinByteValue = -128;
//        byte myMaxByteValue = 127;
//        byte myNewByteValue = (byte)(myMinByteValue/2);       // java turns the result of an expression into an int
//        System.out.println("myNewByteValue = " + myNewByteValue);
//
//        // short has a width of 16
//        short myShortValue = 32767;
//
//        // long has a width of 64
//        long myLongValue = 100L;


        // Challenge:
        // 1. Create a byte variable and set it to any valid byte number.
        // 2. Create a short variable and set it to any valid short number.
        // 3. Create an int variable and set it to any valid int number.
        // 4. Create a variable of type long and make it equal to 50000 + 10 times
        //    the sum of the byte, plus the short plus the int.

        byte myByte = 100;
        short myShort = 32_000;
        int myInt = 100_000;
        long myLong = 50_000L + (10L * (myByte + myShort + myInt));     // Don't need to cast this to long because long
                                                                        // accepts an int value (auto to int)

        System.out.println("myLong = " + myLong);

    }
}
