import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

/**
 * victorhez
 */
public class victorhez {

    // public static void main(String[] args) {
    // Scanner sc=new Scanner(System.in);
    // HashMap<Integer, Integer> map
    // = new HashMap<>();
    // int n=sc.nextInt();

    // for (int i = 0; i < n; i++)
    // {
    // int num;
    // num=sc.nextInt();
    // map.put(num,map.get(num)+1);
    // }

    // for (Map.Entry<Integer, Integer> entry : map.entrySet())
    // {
    // System.out.println(entry.getKey() + " " + entry.getValue());
    // }
    // }

    // }

    static void countFreq(int arr[], int n) {
        Map<Integer, Integer> mp = new HashMap<>();

        // Traverse through array elements and
        // count frequencies
        for (int i = 0; i < n; i++) {
            if (mp.containsKey(arr[i])) {
                mp.put(arr[i], mp.get(arr[i]) + 1);
            } else {
                mp.put(arr[i], 1);
            }
        }
        // Traverse through map and print frequencies
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
    }

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        int l=sc.nextInt();


        int arr[] = new int[l];
        int n = arr.length;
        countFreq(arr, n);
        sc.close();
    }
}