import java.util.ArrayList;
import java.util.Iterator;

public class JavaPredicate {
   public static void main(String[] args) {
      ArrayList<Integer> arr = new ArrayList<Integer>();
      arr.add(Integer.valueOf(5));
      arr.add(Integer.valueOf(54));
      arr.add(Integer.valueOf(6));
      arr.add(Integer.valueOf(3));
      arr.add(Integer.valueOf(2));
      arr.add(Integer.valueOf(1));

      arr.removeIf(new Predicator());

      Iterator itr = arr.iterator();
      while (itr.hasNext()) {
         System.out.println(itr.next());
         itr.remove();
      }

   }
}
