import java.util.Scanner;

/**
 * QueensAttack
 */
public class QueensAttack {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int obs = sc.nextInt();
        int y = sc.nextInt();
        int x = sc.nextInt();
        // calculate all possible range
        int canAttack = 0;
        int temp = (x - 1);
        System.out.println(temp + "   left");
        canAttack += temp;

        temp = N - x;
        System.out.println(temp + "   right");
        canAttack += temp;

        temp = N - y;
        System.out.println(temp + "   up");
        canAttack += temp;

        temp = y - 1;
        System.out.println(temp + "   down");
        canAttack += (y - 1);

        temp = Math.min(N - x, N - y);
        canAttack += temp;
        System.out.println(temp + "   Diagonal upper right corner");

        temp = Math.min(N - x, y - 1);
        System.out.println(temp + "   Diagonal lower right");
        canAttack += temp;

        temp = Math.min(x - 1, y - 1);
        System.out.println(temp + "   diagonal lower left");
        canAttack += temp;

        temp = Math.min(N - y, x - 1);
        System.out.println(temp + "   diagonal upper left");
        canAttack += temp;

        System.out.println(canAttack);
        if (obs != 0) {
            for (int i = 0; i < obs; i++) {
                int k = sc.nextInt();
                int h = sc.nextInt();
                int eq1 = k - y - h + x;// slope +1
                int eq2 = k - y + h - x;// slope -1
                if (eq1 == 0) {
                    temp = Math.abs(x - h);
                    // canAttack-=temp;
                    if (h > x && k > y) {
                        canAttack -= Math.min(N - x, N - y);
                        canAttack = temp - 1;
                    } else if (h < x && k < y) {
                        canAttack -= Math.min(N - x, y - 1);
                        canAttack += temp - 1;
                    }
                } else if (eq2 == 0) {
                    temp = Math.abs(x - h);
                    if (h < x && k > y) {// upper left diagonal
                        canAttack -= Math.min(N - y, x - 1);
                        canAttack += temp - 1;
                    } else if (h > x && k < y) {// diagonal lower right{
                        canAttack -= Math.min(N - x, y - 1);
                        canAttack += temp - 1;
                    }
                } else if (h == x && k != y) {
                    temp = Math.abs(y - k);
                    if (k > y) {
                        canAttack -= N - y;
                        canAttack += temp - 1;
                    } else if (k < y) {
                        canAttack -= y - 1;
                        canAttack += temp - 1;
                    }
                } else if (y == k && x != h) {
                    temp = Math.abs(x - h);
                    if (h > x) {
                        canAttack -= N - x;
                        canAttack += temp - 1;
                    } else if (h < x) {
                        canAttack -= x - 1;
                        canAttack += temp - 1;
                    }
                }
            }
        }
        System.out.println(canAttack + "  Answer");
        sc.close();
    }
}