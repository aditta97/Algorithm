/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ncr;

import java.util.Scanner;

/**
 *
 * @author adittachakraborty
 */
public class NCr {
    
    int factorial(int n) {
        if(n == 0) {
            return 1;
        }
        return n * factorial(n-1);
    }

    public static void main(String[] args) {
        NCr fact = new NCr();
        
        int n, r, nCr, nPr;
        
        Scanner input = new Scanner(System.in);
        
        System.out.println("Enter the number of n: ");
        n = input.nextInt();
        
        System.out.println("Enter the number of r: ");
        r = input.nextInt();
        
        nCr = fact.factorial(n) / (fact.factorial(n - r) * fact.factorial(r));
        nPr = fact.factorial(n) / fact.factorial(n - r);
        
        System.out.println("nCr is: " + nCr);
        System.out.println("nPr is: " + nPr);
    }
    
}
