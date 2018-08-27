package com.kyledjohnson;

public class Main {

    public static void main(String[] args) {

        Hamburger hamburger = new Hamburger("Classic", 3.95, "White", "Beef");
        double finalPrice = hamburger.itemizedHamburger();
        hamburger.addHamburgerAdd1("Tomato", 0.27);
        hamburger.addHamburgerAdd2("Lettuce", 0.27);
        hamburger.addHamburgerAdd3("Cheese", 0.27);
    }
}


