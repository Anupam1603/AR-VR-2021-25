import java.util.Scanner;

public class FactRec {
    public static int fact(int n)
    {
        if (n >= 1)
            return n * fact(n-1);
        else
            return 1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number ");
        int n = sc.nextInt();
        int factorial = fact(n);
        System.out.println("Factorial of " + n + " = " + factorial);
    }

}