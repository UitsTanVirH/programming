
package stackinput;
import java.util.Scanner;
import java.util.Stack;

public class StackInput {
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter stack size: ");
        int stacksize=sc.nextInt();
        Stack<Integer> stack = new Stack<>();
        for(int i=0; i<stacksize; i++){
            int value= sc.nextInt();
            stack.push(value);
        }
        while(!stack.isEmpty()){
            System.out.println(stack.pop());
        }
    }
    
}
