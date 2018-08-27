package com.kyledjohnson;

//import com.sun.tools.jdeprscan.scan.Scan;
import java.util.Scanner;

public class Main {

    // real world application

    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {

        int[] myIntegers = getIntegers(5);
        for(int i=0; i<myIntegers.length; i++) {
            System.out.println("Element " + i + ", typed value was " + myIntegers[i]);
        }

        System.out.println("Average = " + getAverager((myIntegers)));
    }

    public static int[] getIntegers(int number) {
        System.out.println("Enter " + number + " integer values.\r");
        int[] values = new int[number];
        for(int i = 0; i<values.length; i++) {
            // waits for an int from the console
            values[i] = scanner.nextInt();
        }
        return values;
    }

    public static double getAverager(int[] array) {
        int sum = 0;
        for(int i=0; i<array.length;i++) {
            sum += array[i];
        }
        // cast to doubles to prevent integer division
        return ((double) sum / (double) array.length);
    }











//	    // standard array definition
////        int[] myIntArray = new int[10];
////        myIntArray[5] = 50;
////        System.out.println(myIntArray[5]);
//
//        // initializing a different way
//        int[] myIntArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//        // or can use a for loop
//        int[] myOtherIntArray = new int[10];
//
//        // use length instead of hard coding value
//        for(int i = 0; i < myOtherIntArray.length; i++) {
//            // initialize
//            myOtherIntArray[i] = i * 10;
//        }
//
//        // calling print method from below
//        printArray(myOtherIntArray);
//    }
//
//    // output method (showing passing an array
//    public static void printArray(int[] array) {
//        for(int i = 0; i < array.length; i++) {
//            // output
//            System.out.println("Element " + i + ", value is " + array[i]);
//        }


}
