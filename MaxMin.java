import java.util.Scanner;
public class MaxMin {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter size of array ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter elements of array ");
        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
        }

        int min = arr[0];
        int max = arr[0];

        for(int i=0;i<n;i++)
        {
            if(arr[i] > max)
                max = arr[i];
            else if (arr[i] < min)
                min = arr[i];

        }
        System.out.println("Smallest Number is : " + min);
        System.out.println("Largest Number is : " + max);
    }
}