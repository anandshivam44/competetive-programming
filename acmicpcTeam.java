import java.util.Scanner;
/**
 * acmicpcTeam
 */
public class acmicpcTeam {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        boolean arr[][] = new boolean[n][m];
        boolean data[] = new boolean[m];
        int max = 0;
        int combination = 0;
        // taking input
        for (int i = 0; i < n; i++) {
            String t = sc.next();
            for (int j = 0; j < m; j++) {
                String d = String.valueOf(t.charAt(j));
                int s = Integer.parseInt(d.toString());
                if (s == 1) {
                    arr[i][j] = true;
                } else {
                    arr[i][j] = false;
                }
            }
        }

        for (int i = 0; i < n; i++) {// calculation starts here
            for (int j = i + 1; j < n; j++) {
                data = getDetails(arr[i], arr[j], m);
                int team_knowledge = getLevel(data);
                if (max == team_knowledge) {
                    combination++;
                }
                if (team_knowledge > max) {
                    max = team_knowledge;
                    combination = 1;
                }

            }
        }
        System.out.println(max);
        System.out.println((combination));
        sc.close();

    }

    private static int getLevel(boolean[] data) {
        int count = 0;
        for (int i = 0; i < data.length; i++) {
            if (data[i]) {
                count++;
            }
        }
        return count;
    }

    static boolean[] getDetails(boolean a[], boolean b[], int m) {
        boolean temp[] = new boolean[m];
        for (int i = 0; i < m; i++) {
            if (a[i] || b[i]) {
                temp[i] = true;
            }
            // System.out.println(temp[i]);

        }
                return temp;

    }

}