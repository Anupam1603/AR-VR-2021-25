import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc= new Scanner(System.in);
	    System.out.println("enter length");
	    int n=sc.nextInt();
	    int l=0;
	    int s;
	    int a[]=new int[n];
	    System.out.println("enter array");
	    for(int i=0;i<n;i++)
	    {
	        a[i]=sc.nextInt();
	        
	    }
	    s=a[0];
	    for(int i=0;i<n;i++)
	    {
	        if(l<a[i])
	        {
	            l=a[i];
	        }
	        if(s>a[i])
	        {
	            s=a[i];
	        }
	    }
	    System.out.println("largest"+l);
	    System.out.println("smallest"+s);
	}
}