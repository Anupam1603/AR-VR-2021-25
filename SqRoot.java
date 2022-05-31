import java.util.Scanner;
public class SqRoot {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double sq = 0, num = 0;
        System.out.println("Enter a number ");
        num = sc.nextDouble();
        sq = sqrt(num);
        System.out.println(sq);
    }
    public static double sqrt(double num){
        int i = 1;
        while(true)
        {
            if (i*i == num)
                return i;
            else if (i*i>num) {
                return preciseSqrt(num,i-1,i);
            }
            i++;
        }
    }
    public static double preciseSqrt(double num,double i,double j)
    {

        double midvalue = (double)(i+j)/2;
        double square = midvalue*midvalue;
        if(square == num || Math.abs((square-num))<0.001)
            return midvalue;
        else if(square>num)
            return preciseSqrt(num, i, midvalue);
        else
            return preciseSqrt(num,midvalue,j);
    }
}
