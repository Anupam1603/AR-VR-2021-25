import java.util.Scanner;

public class Prime {
    public static void main(String[] args) {
        int num,f=0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number ");
        num = sc.nextInt();
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
                f++;
        }
        if(f==0)
            System.out.println(num+" is a prime number");
        else
            System.out.println(num+" is not a prime number");
    }
}
