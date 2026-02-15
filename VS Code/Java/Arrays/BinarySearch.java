import java.util.*;

public class BinarySearch {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter data : ");
        int[] arr = new int[5];
        for(int i = 0 ; i < 5 ; i++){
            arr[i] = sc.nextInt();
        }
        System.out.print("Enter a key to search :");
        int key = sc.nextInt();
        for(int j = 0 ; j < 5 ; j++){
            if (arr[j] == key){
                System.out.println("Number found!");
                break;
            }
        }

    }
}
