/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mergesort;

/**
 *
 * @author adittachakraborty
 */
public class MergeSort {

    void merge(int array[], int beg, int mid, int end) {
        int left = mid - beg + 1;
        int right = end - mid;

        int leftArray[] = new int[left];
        int rightArray[] = new int[right];

        for (int i = 0; i < left; ++i) {
            leftArray[i] = array[beg + i];
        }

        //int r = 0;
        for (int j = 0; j < right; ++j) {
            rightArray[j] = array[mid + 1 + j];
        }

        int i = 0, j = 0;
        int k = beg;
        while (i < left && j < right) {
            if (leftArray[i] <= rightArray[j]) {
                array[k] = leftArray[i];
                i++;
            } else {
                array[k] = rightArray[j];
                j++;
            }
            k++;
        }

        while (i < left) {
            array[k] = leftArray[j];
            i++;
            k++;
        }

        while (j < right) {
            array[k] = rightArray[j];
            j++;
            k++;
        }

    }

    void sort(int[] array, int beg, int end) {
        if (beg < end) {
            int mid = (beg + end) / 2;
            sort(array, beg, mid);
            sort(array, mid + 1, end);
            merge(array, beg, mid, end);
        }
    }

    public static void main(String[] args) {
        int array[] = {90, 23, 101, 45, 65, 23, 67, 89, 34, 23};

        MergeSort m = new MergeSort();
        m.sort(array, 0, array.length - 1);

        System.out.println("Sorted Array: ");
        for (int i = 0; i < array.length; i++) {
            System.out.println(array[i] + "");
        }
    }

}
