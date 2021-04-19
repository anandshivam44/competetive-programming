import java.util.Collections;
import java.util.*;

public class PreventCorruption {
   public static void main(String[] args) {
      List<Integer> arr = new ArrayList<Integer>();
      arr.add(Integer.valueOf(5));
      arr.add(Integer.valueOf(54));
      arr.add(Integer.valueOf(6));
      arr.add(Integer.valueOf(3));
      arr.add(Integer.valueOf(2));
      arr.add(Integer.valueOf(1));

      Iterator itr = arr.iterator();
      while (itr.hasNext()) {
         System.out.println(itr.next());
         itr.remove();
      }

      List<Integer> arr2 = Collections.unmodifiableList(arr);
      try {
         arr2.add(Integer.valueOf(555));
         System.out.println("Value added");
      } catch (Exception e) {
         System.out.println("Error adding value");
         e.printStackTrace();
      }

   }
}
