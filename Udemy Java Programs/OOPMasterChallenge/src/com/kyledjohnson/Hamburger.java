package com.kyledjohnson;

public class Hamburger {

    private String name;
    private double price;
    private String breadType;
    private String meatType;
//    private boolean lettuce;
//    private boolean tomato;
//    private boolean ketchup;
//    private boolean mustard;
//    private boolean cheese;

    private String add1Name;
    private double add1Price;
    private String add2Name;
    private double add2Price;
    private String add3Name;
    private double add3Price;
    private String add4Name;
    private double add4Price;



    public Hamburger(String name, double price, String breadType, String meatType) {
        this.name = name;
        this.price = price;
        this.breadType = breadType;
        this.meatType = meatType;
    }

    public void addHamburgerAdd1(String name, double price) {
        this.add1Name = name;
        this.add1Price = price;
    }
    public void addHamburgerAdd2(String name, double price) {
        this.add2Name = name;
        this.add2Price = price;
    }
    public void addHamburgerAdd3(String name, double price) {
        this.add3Name = name;
        this.add3Price = price;
    }
    public void addHamburgerAdd4(String name, double price) {
        this.add4Name = name;
        this.add4Price = price;
    }

    public double itemizedHamburger() {
        double hamburgerPrice = this.price;
        System.out.println(this.name + " hamburger with " + this.meatType + " on a " + this.breadType + ", price: " + this.price);
        if (this.add1Name != null) {
            hamburgerPrice += this.add1Price;
            System.out.println("Added " + this.add1Name + " for an extra " + this.add1Price);
        }
        if (this.add2Name != null) {
            hamburgerPrice += this.add2Price;
            System.out.println("Added " + this.add2Name + " for an extra " + this.add2Price);
        }
        if (this.add3Name != null) {
            hamburgerPrice += this.add3Price;
            System.out.println("Added " + this.add3Name + " for an extra " + this.add3Price);
        }
        if (this.add4Name != null) {
            hamburgerPrice += this.add4Price;
            System.out.println("Added " + this.add4Name + " for an extra " + this.add4Price);
        }

        return hamburgerPrice;
    }






}
