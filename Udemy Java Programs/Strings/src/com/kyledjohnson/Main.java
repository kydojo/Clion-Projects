package com.kyledjohnson;

public class Main {

    public static void main(String[] args) {

        // Data types (primitive types) discussed so far:
        //      byte
        //      short
        //      int
        //      long
        //      float
        //      double
        //      char
        //      boolean

        // New type (not primitive, but built-in class, just like C++): String
        String myString = "This is a string";
        System.out.println("myString is equal to = " + myString);

        // Append to a string
        myString = myString + ", and this is more.";
        System.out.println("myString is equal to = " + myString);

        // Append more
        myString = myString + " \u00A92017.";
        System.out.println("myString is equal to = " + myString);


        // Numbers in strings
        String numberString = "250.55";
        numberString = numberString + "49.95";
        System.out.println("The result = " + numberString); // Treated as text only - no numeric addition done

        // More numbers in strings
        String lastString = "10";
        int myInt = 50;
        lastString = lastString + myInt;        // The int is converted to a String (output = 1050, instead of 60)
        System.out.println("lastString = " + lastString);

    }
}
