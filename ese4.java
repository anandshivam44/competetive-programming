public class ese4 {
    static int n = 30;
    int arr[]=new int[n];

    public static void main(String[] args) {

        int arr={29,28,27,24,23,23,21,18,18,18,18,17,17,16,14,14,14,14,13,12,10,9,8,5,4,4,4,3,3,1};

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

}
