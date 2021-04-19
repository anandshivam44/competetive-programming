import java.util.Comparator;
import java.util.Iterator;
import java.util.Collections;
import java.util.ArrayList;

public class LambdaFunction1 {
   public static void main(String[] args) {
      ArrayList<Integer> arr = new ArrayList<Integer>();
      arr.add(Integer.valueOf(5));
      arr.add(Integer.valueOf(54));
      arr.add(Integer.valueOf(6));
      arr.add(Integer.valueOf(3));
      arr.add(Integer.valueOf(2));
      arr.add(Integer.valueOf(1));

      Collections.sort(arr, (n1, n2) -> (-1) * n1.compareTo(n2));

      Iterator itr = arr.iterator();
      while (itr.hasNext()) {
         System.out.println(itr.next());
         itr.remove();
      }
   }
}
