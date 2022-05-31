import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc= new Scanner(System.in);
	    System.out.println("enter length of array");
	    int n=sc.nextInt();
	    int s=0;
	    int a[]=new int[n];
	    System.out.println("enter array");
	    for(int i=0;i<n;i++)
	    {
	        a[i]=sc.nextInt();
	    }
	    for(int i=0;i<n;i++)
	    {
	        s=s+a[i];
	    }
	    System.out.println(s);
	}
}
	    