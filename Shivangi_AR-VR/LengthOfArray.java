import java.util.Scanner;

public class LengthOfArray {
    public static void main(String[] args) {
        int i=0;
        int[] arr = new int[]{1,3,2,5,6,6,8,3,46};
//        while(arr[i] != null)
//        {
//            len++;
//            i++;
//        }
        for(int item:arr){
            i++;
        }
        System.out.println("length is "+i);
    }
}
