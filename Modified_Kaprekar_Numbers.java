import java.util.Scanner;

/**
 * Modified_Kaprekar_Numbers
 */
public class Modified_Kaprekar_Numbers {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int low = sc.nextInt();
        int high = sc.nextInt();
        String answer = "";
        for (int i = low; i <= high; i++) {
            String n = String.valueOf(i);
            String sq = String.valueOf(i * i);
            long d = n.length();
            long d_sq = sq.length();
            String r = sq.substring((int)(d_sq - d), (int)d_sq);//to correct it runa loop instead of using substring. Good Night
            String l = sq.substring(0,(int)( d_sq - d));
            if (l.equals("")) {
                l = "0";
            }
            int a = Integer.parseInt(l);

            int b = Integer.parseInt(r);

            if ((a + b) == i) {
                answer += String.valueOf(i)+" ";
            }
        }
        if (answer.equals("")) {
            System.out.println("INVALID RANGE");
        } else {
            System.out.println(answer);
        }
        sc.close();
    }
}