import java.util.ArrayList;
import java.util.Iterator;

public class ListToSet {
   public static void main(String[] args) {
      ArrayList<String> arr = new ArrayList<String>();
      arr.add("Shivam");
      arr.add("Anand");
      arr.add("is");
      arr.add("a");
      arr.add("good");
      arr.add("boy");

      Iterator<String> itr = arr.iterator();
      while (itr.hasNext()) {
         System.out.println(itr.next());
         itr.remove();
      }
   }
}
