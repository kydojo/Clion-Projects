package com.kyledjohnson;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Main extends JFrame implements ActionListener{

    private static final long serialVersionUID = 1L;

    public static void main(String[] args) {
        new Main().setVisible(true);
    }

    private Main() {
        super("JFrame Practice");
        setSize(1024, 768);
        setResizable(false);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        /*
            Different types of layouts:
            FlowLayout
            GridBagLayout
            GridLayout
            BorderLayout
            etc
         */

        JButton button = new JButton("Enter");
        //JButton button2 = new JButton("Enter 2");
        button.addActionListener(this);
        //button2.addActionListener(this);

        add(button);
        //add(button2);
    }

    public void actionPerformed (ActionEvent e) {
        //String name = e.getActionCommand();     // The default action command is the text on the button, but you can
                                                // use button.setActionCommand("action command") to set to something
                                                // else.
          System.out.println("Button 1 has been clicked");

//        if(name.equals("Enter")) {
//            System.out.println("Button 1 has been clicked");
//        }
//        else if(name.equals("Enter 2")) {
//            System.out.println("Button 2 has been clicked");
//        }



    }
}
