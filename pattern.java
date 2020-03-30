import java.util.Scanner;

/**
 * pattern
 */
public class pattern {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i+j==0 || i+j==(n-1) || i+j==(n-1)*(n-1)) {
                    System.out.println("+");
                }
                else{
                    System.out.println(" ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}