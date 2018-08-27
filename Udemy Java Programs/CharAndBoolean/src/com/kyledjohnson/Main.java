package com.kyledjohnson;

public class Main {

    public static void main(String[] args) {
        // width of 16 (2 bytes)
        char myChar = '\u00A9';         // unicode copyright character
        System.out.println("Unicode output (copyright) = " + myChar);

        boolean myBoolean = true;
        boolean isMale = true;

        // Challenge:
        // 1. Find teh code for the registered symbol on the same line as teh copyright symbol (unicode-table.com).
        // 2. Create a variable of type char and assign it the unicode value for that symbol.
        // 3. Display on screen.


        char registeredSymbol = '\u00AE';
        System.out.println("Unicode output (registered) = " + registeredSymbol);


    }
}
