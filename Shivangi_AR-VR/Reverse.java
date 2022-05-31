import java.util.Scanner;

public class Reverse {
    public static void main(String[] args) {
        int num,rev=0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the integer to reverse");
        num = sc.nextInt();

        while(num>0){
            int d = num%10;
            rev = (rev*10)+d;
            num/=10;
        }
        System.out.println("Reversed Integer is "+rev);
    }
}
