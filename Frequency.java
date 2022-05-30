import java.util.Scanner;

public class Frequency {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int freq = 0;
        System.out.println("Enter the String ");
        String S = sc.nextLine();
        System.out.println("Enter the character ");
        char f = sc.next().charAt(0);
        for(int i=0; i<S.length(); i++)
        {
            if(S.charAt(i) == f)
                freq++;
        }
        System.out.println("The Character "+f+" appears "+freq+" times.");
    }
}
