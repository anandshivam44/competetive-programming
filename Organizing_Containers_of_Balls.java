import java.util.Scanner;
import java.util.Arrays;

/**
 * Organizing_Containers_of_Balls
 */
public class Organizing_Containers_of_Balls {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n=sc.nextInt();
            long M[][]=new long[n][n];
            for (int j = 0; j < n; j++) {//input
                for (int j2 = 0; j2 < n; j2++) {
                    M[j][j2]=sc.nextLong();
                }
            }
            long sum_same_colour[]=new long[n];
            long sum_same_container[]=new long[n];
            for (int j = 0; j < M.length; j++) {//calculating
                for (int j2 = 0; j2 < M.length; j2++) {
                    sum_same_colour[j]+=M[j2][j];
                    sum_same_container[j]+=M[j][j2];
                }
            }
            Arrays.sort(sum_same_colour);
            Arrays.sort(sum_same_container);
            System.out.println(Arrays.toString(sum_same_colour));
            System.out.println(Arrays.toString(sum_same_container));
            boolean b=true;
            for (int j = 0; j < n; j++) {
                if(sum_same_colour[j]!=sum_same_container[j]){
                    b=false;
                    break;
                }
            }

            
            if (b) {
                System.out.println("Possible");
            }
            else {
                System.out.println("Impossible");
            }
        }
        sc.close();
    }
}