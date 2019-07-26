/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bubblesort;

import java.util.Scanner;

/**
 *
 * @author adittachakraborty
 */
public class BubbleSort {

    void bubblesort(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        BubbleSort ob = new BubbleSort();
        Scanner input = new Scanner(System.in);

        System.out.println("Enter length of Array: ");
        int length = input.nextInt();

        int arr[] = new int[length];

        System.out.println("\nEnter your array element: ");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = input.nextInt();
        }

        //ob.bubblesort(arr);
        System.out.println("\nInputed array: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        ob.bubblesort(arr);
        System.out.println();

        System.out.println("Sorted array: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

}
