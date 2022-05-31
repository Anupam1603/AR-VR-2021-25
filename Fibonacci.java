import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        int lim,A=0,B=1,C;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of terms ");
        lim = sc.nextInt();
        System.out.print(A+" "+B+" ");
        for(int i=2;i<lim;i++)
        {
            C=A+B;
            System.out.print(C+" ");
            A=B;
            B=C;
        }
    }
}
