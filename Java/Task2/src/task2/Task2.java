
package task2;

import java.util.Scanner;

class Math{
    Scanner input = new Scanner(System.in);
    
    void first(){
        System.out.println("Enter x1 value: ");
        int x1 = input.nextInt();
        
        System.out.println("Enter y1 value: ");
        int y1 = input.nextInt();
        
        System.out.println("Enter x2 value: ");
        int x2 = input.nextInt();

        System.out.println("Enter y2 value: ");
        int y2 = input.nextInt();
        
        System.out.println("Enter x3 value: ");
        int x3 = input.nextInt();

        System.out.println("Enter y3 value: ");
        int y3 = input.nextInt();
    }
}

public class Task2 {

    public static void main(String[] args) {
        Math m = new Math();
    }
    
}
