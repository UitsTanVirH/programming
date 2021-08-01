
package day.one;

import java.util.Scanner;

public class array {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int arr[] = new int[10];
        for (int i = 0; i < 10; i++) {
            arr[i]=input.nextInt();
        }
        int temp=0;
        for(int i=0; i<10; i++){
            if(arr[i]>temp){
                temp=arr[i];
            }
        }
        System.out.println("Max = "+temp);
    }
}
