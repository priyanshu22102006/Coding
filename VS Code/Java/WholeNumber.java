import java.util.Scanner;

public class WholeNumber {
    public static void main(String[] priya){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number :");
        int number = sc.nextInt();
        for(int i = 0 ; i < number ; i++){
            System.out.print(i + " ");
        }
    }
}
