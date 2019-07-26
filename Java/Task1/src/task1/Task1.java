
package task1;

import java.util.Scanner;

class Math{
    
    void m(){
        Scanner input = new Scanner(System.in);
        
        System.out.println("Insert value for a: ");
        double a = input.nextDouble();
        
        System.out.println("Insert value for b: ");
        double b = input.nextDouble();
        
        System.out.println("Insert value for c: ");
        double c = input.nextDouble();
        
        double result = b * b - 4.0 * a * c;
        
        //if(result > 0.0){
            double x1 = (-b + java.lang.Math.pow(result, 0.5)) / (2.0*a);
            double x2 = (-b - java.lang.Math.pow(result, 0.5)) / (2.0*a);
            System.out.println("The root are "+x1+" and "+x2);
        //}
//        else if(result == 0.0){
//            double x1 = -b / (2.0 * a);
//            System.out.println("The root is "+x1);
//        }
        //else{
            //double r2 = -b / (2.0 * a);
            //System.out.println("The root is "+r2);
            //System.out.println("The root are not equal");
            
        //}
    }
}

public class Task1 {

    public static void main(String[] args) {
        Math M = new Math();
        
        M.m();
    }
    
}
