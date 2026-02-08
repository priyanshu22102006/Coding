import java.util.Scanner;
public class NaturalNumber{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number :");
        int number = input.nextInt();
        for(int i = 1; i <= number ; i = i + 1){
            System.out.println(i);
        }
    }
}