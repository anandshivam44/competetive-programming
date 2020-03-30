
/**
 * Taum_and_B_day
 */
import java.util.Scanner;

public class Taum_and_B_day {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        for (long i = 0; i < t; i++) {
            long b = sc.nextLong();
            long w = sc.nextLong();
            long bc = sc.nextLong();
            long wc = sc.nextLong();
            long z = sc.nextLong();
            if (wc < bc) {
                if (wc + z < bc) {
                    bc = wc + z;
                }
            }
            else if(bc<wc){
                if (bc + z < wc) {
                    wc = bc + z;
                }
            }
            System.out.println((w*wc+b*bc));
        }
    }
}