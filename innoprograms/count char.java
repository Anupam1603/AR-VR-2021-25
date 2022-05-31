import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc= new Scanner(System.in);
	    System.out.println("enter your string");
	    String s;
	    String w="";
	    int c=0;
	    s=sc.nextLine();
	    System.out.println("enter your character");
	     char ch=sc.next().charAt(0);
	    s=s+" ";
	    for(int i=0;i<s.length();i++)
	    {
	        if(s.charAt(i)!=' ')
	        {
	            w=w+s.charAt(i);
	        }
	        else{
	            for(int y=0;y<w.length();y++)
	            {
	                if(w.charAt(y)==ch)
	                {
	                    c++;
	                }
	            }
	            w="";
	        }
	    }
	    System.out.println(c);
	}
}
	    