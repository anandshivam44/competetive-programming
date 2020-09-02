import java.util.Arrays;
import java.util.Scanner;

/**
 * hashcode
 */
public class hashcode {

    
    public static void main(String[] args) {
        
        int no_of_books=sc.nextInt();
        int no_of_libraries=sc.nextInt();
        int no_of_days=sc.nextInt();
        int score_of_book[]=new int[no_of_books];
        int library_data[][]=new int[no_of_libraries][4];
        for (int i = 0; i < no_of_books; i++) {
            score_of_book[i]=sc.nextInt();
        }

        boolean found[]=new boolean[no_of_books];

        for (int i = 0; i < no_of_libraries ; i++) {
            library_data[i][0]=sc.nextInt();//no of book in library
            library_data[i][1]=sc.nextInt();//no of days for signup
            library_data[i][2]=sc.nextInt();//books shipped per day
            int sum=0;
            for (int j = 0; j < library_data[i][0];j++) {
                int x=sc.nextInt();
                if(found[x]==false){
                    found[x]=true;
                    sum+=x;
                }
            }
            library_data[i][3]=sum;
            System.out.println(sum);

        }

        sc.close(); 
    } 
  
    
}