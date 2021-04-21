import java.util.Comparator;
import java.util.Iterator;
import java.util.Collections;
import java.util.ArrayList;

public class Stream1 {
   public static void main(String[] args) {
      ArrayList<Integer> arr = new ArrayList<Integer>();
      arr.add(Integer.valueOf(5));
      arr.add(Integer.valueOf(54));
      arr.add(Integer.valueOf(6));
      arr.add(Integer.valueOf(3));
      arr.add(Integer.valueOf(2));
      arr.add(Integer.valueOf(1));

      System.out.println("Single Thread Stream");
      arr.stream().map(p -> p * p).forEach(y -> System.out.println(y));
      System.out.println();

      System.out.println("Parallel Stream");
      arr.stream().parallel().map(p -> p * p).forEach(y -> System.out.println(y));
      System.out.println();

      System.out.println("Iterator");
      Iterator itr = arr.iterator();
      while (itr.hasNext()) {
         System.out.println(itr.next());
         itr.remove();
      }
   }
}
