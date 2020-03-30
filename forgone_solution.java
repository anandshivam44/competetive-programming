import java.math.BigInteger;
import java.util.Scanner;

/**
 * forgone_solution
 */
class forgone_solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String tc=sc.next();
        int t=Integer.parseInt(tc);
        //sc.nextLine();
        //sc.nextLine();
        for (long i = 0; i < t ; i++) {
            //long N=sc.nextLong();
            String A="",B="";
            String S=sc.next();
            long l=S.length();
            //boolean b=false;
            
            for (int j = 0; j < l; j++) {
                char c=S.charAt(j);
                if (c=='4') {
                    A=A+"3";
                    B=B+"1";
                } else {
                    A=A+c;
                    B=B+"0";
                }

            }
            BigInteger b=new BigInteger(B);
            System.out.println("Case #"+(i+1)+":"+A+" "+b);
        }
        sc.close();
    }
}