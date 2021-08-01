package day.one;

import java.util.Scanner;

public class DayOne {

    public static void main(String[] args) {
        char ch;
        Scanner input = new Scanner(System.in);
        ch = input.next().charAt(0);
        if(ch>='a' && ch<='z'){
            System.out.println("The letter is Smaller");
        }
        else{
            System.out.println("The letter is Capital");
        }
        
        int arr[] = new int[10];
        for (int i = 0; i < 10; i++) {
            arr[i]=input.nextInt();
        }
        
        
    }
    
}
