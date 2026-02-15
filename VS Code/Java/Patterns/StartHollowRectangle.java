import java.util.Scanner;

public class StartHollowRectangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a length : ");
        int length = sc.nextInt();
        System.out.print("Enter a breadth : ");
        int breadth = sc.nextInt();
        for(int i = 0 ; i < length ; i++){
            for(int j = 0 ; j <breadth ; j++){
                if(i == 0 || j==0 || i == length-1 || j == breadth-1){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
