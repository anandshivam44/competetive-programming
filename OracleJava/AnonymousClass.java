import java.util.Comparator;
import java.util.Iterator;
import java.util.Collections;
import java.util.ArrayList;

public class AnonymousClass {
   public static void main(String[] args) {
      ArrayList<Integer> arr = new ArrayList<Integer>();
      arr.add(Integer.valueOf(5));
      arr.add(Integer.valueOf(54));
      arr.add(Integer.valueOf(6));
      arr.add(Integer.valueOf(3));
      arr.add(Integer.valueOf(2));
      arr.add(Integer.valueOf(1));

      Collections.sort(arr, new Comparator<Integer>() {
         public int compare(Integer p1, Integer p2) {
            return (-1) * p1.compareTo(p2);
         }
      });
      // Collections.reverse(arr);
      // Collections.shuffle(arr);

      Iterator itr = arr.iterator();
      while (itr.hasNext()) {
         System.out.println(itr.next());
         itr.remove();
      }
   }
}
