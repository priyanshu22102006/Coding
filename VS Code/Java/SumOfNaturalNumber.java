import java.util.Scanner;

public class SumOfNaturalNumber {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a number : ");
        int sum = 0,number;
        number = sc.nextInt();
        for(int i = 1 ; i <= number ; i++){
            sum = sum + i;
        }
        System.out.println("Sum of natural numbers up to " + number + " is: " + sum);
    }
}
