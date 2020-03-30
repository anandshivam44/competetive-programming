import java.util.Scanner;
import java.math.BigInteger;
import java.util.Arrays;

/**
 * code_1
 */
public class code_1 {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        long arr[]=new long[N];
        for (int i = 0; i < N; i++) {
            arr[i]=sc.nextLong();
        }
        Arrays.sort(arr);
        BigInteger sum=new BigInteger("0");
        BigInteger s=new BigInteger("0");
        for (int i = N-2; i >= 0; i--) {
            sum.add(BigInteger.valueOf(arr[i]));
            s.add(sum);
        }
        System.out.println(s);

        sc.close();
        
    }
}