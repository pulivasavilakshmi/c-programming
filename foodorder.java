package day2;

import java.util.Scanner;

public class foodorder { 
    public static void main(String[] args) { 
        Scanner akkii = new Scanner(System.in); 
        
        System.out.println("enter the nameee"); 
        String a = akkii.nextLine(); 
        
        System.out.println("enter the addtess"); 
        String v = akkii.nextLine(); 
        
        System.out.println("enter the mobile num"); 
        String mobile = akkii.nextLine(); 
        
        boolean isValid = true; 
        
        System.out.println("enter the code/amount"); 
        double o = akkii.nextDouble(); 
        
        if(!a.matches("^[A-Za-z ]{5,}$")) {
            isValid = false; 
            System.out.println("Invalid Name"); 
        } 
        
        if(!mobile.matches("^[0-9]{10}$")){ 
            isValid = false; 
            System.out.println("Invalid mobile"); 
        } 
        
        if(o >= 500){ 
            System.out.println("delivery charges are no"); 
        } else { 
            double p = o * 5 / 100; 
            System.out.println("Delivery charges: " + p); 
        } 
        
        akkii.close(); // Good practice to close the scanner
    } 
}
