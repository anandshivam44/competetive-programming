import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;

class School_of_Geometry {

    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int t = Integer.parseInt(br.readLine());

        if(t>0){
            for (int i = 0; i < t; i++) {
                int n = Integer.parseInt(br.readLine());
                int a[] = new int[n];
                int b[] = new int[n];
                String k[] = br.readLine().split(" ");
                for (int j = 0; j < n; j++) {
                    a[j] = Integer.parseInt(k[j]);
                }
                String l[] = br.readLine().split(" ");
                for (int j = 0; j < n; j++) {
                    b[j] = Integer.parseInt(l[j]);
                }
                int min = 0;
                int s = 0;
                Arrays.sort(a);
                Arrays.sort(b);
                //bw.write(Arrays.toString(a)+"\n");
                //bw.write(Arrays.toString(b)+"\n");
                for (int j = 0; j < n; j++) {
                    min = Math.min(a[j], b[j]);
                    s += min;
                }
                bw.write(String.valueOf(s+"\n"));
    
            }
        }
        bw.flush();
    }
}