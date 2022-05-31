import java.util.Scanner;

public class FibonacciRec {
    public static int fibo(int num) {
        if (num == 0) {
            return 0;
        }
        if (num == 1 || num == 2) {
            return 1;
        }
        return fibo(num-2)+fibo(num-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of terms");
        int num = sc.nextInt();
        System.out.println("Fibonacci sries is: ");
        for(int i=0; i<num; i++)
        {
            System.out.print(fibo(i)+" ");
        }
    }
}

