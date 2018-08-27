package com.kyledjohnson;

import java.sql.SQLOutput;

public class Main {

    public static void main(String[] args) {

        int result = 1 + 2;     // + and = operators
        System.out.println("1 + 2 = " + result);

        int previousResult = result;

        result = result - 1;
        System.out.println(previousResult + " - 1 = " + result);

        previousResult = result;

        result = result * 10;
        System.out.println(previousResult + " * 10 = " + result);

        previousResult = result;

        result = result / 5;
        System.out.println(previousResult + " / 5 = " + result);

        previousResult = result;

        result = result % 3;
        System.out.println(previousResult + " % 3 = " + result);

        previousResult = result;

        result++;
        System.out.println(previousResult + "++ = " + result);

        previousResult = result;

        result--;
        System.out.println(previousResult + "-- = " + result);

        previousResult = result;

        result += 2;
        System.out.println(previousResult + "+= 2 = " + result);

        // etc...

        // ***********************************************************************

        // if statements

        boolean isAlien = false;
        if (isAlien == true)
            System.out.println("Not an alien!");

        int topScore = 100;
        if (topScore >= 100) {
            System.out.println("You got the high score!");
        }



        // Challenge:
        // 1. Create a double variable with the value 20.
        // 2. Create a second variable of type double with the value of 80.
        // 3. Add both numbers up and multiply by 25.
        // 4. Use the remainder operator to figure out the remainder from the sum of #3 divided by 40.
        // 5. Write an if statement that displays a message "Total was over the limit" if the remaining
        //    total (#4) is equal to 20 or less.


        double one = 20d;
        double two = 80d;

        double sum = (one + two) * 25;
        double remainder = (sum % 40)

        System.out.println("Sum = " + sum);
        System.out.println("Remainder = " + remainder);

        if (remainder <= 20 )
            System.out.println("Total was over the limit");
    }
}
