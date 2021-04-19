import java.util.function.Predicate;

import java.util.function.Predicate;

public class Predicator implements Predicate<Integer> {
   public boolean test(Integer int1){
      return (int1.intValue())%2==0;
   }
}
