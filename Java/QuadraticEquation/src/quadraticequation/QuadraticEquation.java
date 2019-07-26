/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package quadraticequation;

import java.util.Scanner;

/**
 *
 * @author adittachakraborty
 */
public class QuadraticEquation {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        System.out.println("Input a: ");
        double a = input.nextDouble();
        
        System.out.println("Input b: ");
        double b = input.nextDouble();
        
        System.out.println("Input c: ");
        double c = input.nextDouble();
        
        double result = b * b - 4 * a * c;
        
        if (result > 0) {
            double root1 = (-b + Math.pow(result, 0.5)) / (2 * a);
            double root2 = (-b - Math.pow(result, 0.5)) / (2 * a);
            
            System.out.println("The roots are " + root1 + " and " + root2);
        } else if (result == 0) {
            double root1 = -b / (2 * a);
            
            System.out.println("The root is " + root1);
        } else {
            System.out.println("The equation has no real roots");
        }
    }
}
