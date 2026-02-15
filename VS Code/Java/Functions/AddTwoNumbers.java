import java.util.Scanner;

public class AddTwoNumbers{
    public static int AddTwoNum(int a,int b){
        return a+b;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number A :");
        int a = sc.nextInt();
        System.out.println("Enter number B :");
        int b = sc.nextInt();
        System.out.println("Sum of "+a+" + "+b+" = "+ AddTwoNum(a,b));
    }
}