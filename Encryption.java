import java.util.Scanner;

/**
 * Encryption
 */
public class Encryption {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String S="";
        for (int i = 0; i < s.length(); i++) {
            char c=s.charAt(i);
            if(c!=' '){
                S+=c;
            }
        }
        int L=S.length();
        int row=(int)Math.floor(Math.pow(L, 0.5));
        int column=(int)Math.ceil(Math.pow(L, 0.5));
        if((row*column)<L){
            row++;
        }
        char encryt[][]=new char[row][column];
        int p=0;
        for (int  i = 0; i < row; i++) {//storing
            for (int j = 0; j < column; j++) {
                try {
                    encryt[i][j]=S.charAt(p);
                } catch (Exception e) {
                    encryt[i][j]='\u0000';
                }

                p++;
            }
        } 
        String result="";
        for (int i = 0; i < column; i++) {
            int j = 0;
            for (; j < row; j++) {
                if(!(encryt[j][i]=='\u0000'))
                result+=encryt[j][i];
            }
            if(!(i==column-1))
            result+=" ";
        }
        System.out.print(result);
        sc.close();
        
    }
}