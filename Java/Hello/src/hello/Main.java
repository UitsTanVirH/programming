
package hello;

import java.util.Arrays;
import java.util.Date;

public class Main {

    public static void main(String[] args) {
        System.out.println("Hello World");
        long age = 11123456789L;
        System.out.println(age);
        Date now = new Date();
        System.out.println(now);
        
        int[] arr = new int[4];
        arr[0]=2;
        System.out.println(Arrays.toString(arr));
    }
    
}
