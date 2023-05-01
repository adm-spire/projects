import java.util.*;
public class test2 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter 3 digit number");
        int n = sc.nextInt();
        char[] digits = String.valueOf(n).toCharArray();
        //int x = digits[1];
        int x = Integer.valueOf(digits[1]);
        System.out.println(x-48);
        if((x-48)%3 == 0){
            System.out.println("number is trendy");
        } 
        else{
            System.out.println("number is not trendy");
        }


    }
    
}
