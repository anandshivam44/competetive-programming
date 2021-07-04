import java.util.Random;

public class ese3 {
    static int n = 10;
    static int arr[][] = new int[n][n];

    public static void main(String[] args) {

        // ese3 ob = new ese3();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = getRandomNumberUsingNextInt(100, 999);
            }
        }
        for (int i = 0; i < arr.length; i++) {
            if (i % 2 == 0) {
                bubbleSortAscending(arr, i);
            } else {
                bubbleSortDescending(arr, i);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    static void bubbleSortAscending(int arr[][], int rowNumber) {
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (arr[rowNumber][j] > arr[rowNumber][j + 1]) {
                    // swap arr[j+1] and arr[j]
                    int temp = arr[rowNumber][j];
                    arr[rowNumber][j] = arr[rowNumber][j + 1];
                    arr[rowNumber][j + 1] = temp;
                }
    }

    static void bubbleSortDescending(int arr[][], int rowNumber) {
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (arr[rowNumber][j] < arr[rowNumber][j + 1]) {
                    // swap arr[j+1] and arr[j]
                    int temp = arr[rowNumber][j];
                    arr[rowNumber][j] = arr[rowNumber][j + 1];
                    arr[rowNumber][j + 1] = temp;
                }
    }

    static int getRandomNumberUsingNextInt(int min, int max) {
        Random random = new Random();
        return random.nextInt(max - min) + min;
    }
}