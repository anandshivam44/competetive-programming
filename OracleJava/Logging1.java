
// import java.lang.System.Logger;
import java.util.*;
import java.util.logging.*;

public class Logging1 {

   private static Logger logger = Logger.getLogger(Logging1.class.getName());

   public static void main(String[] args) throws ArithmeticException {
      // throw new ArithmeticException();
      // try {
      // int var = 56 / 0;

      // } catch (Exception e) {
      // logger.log(Level.SEVERE, "Error Message", e);
      // }
      // logger.log(Level.INFO, "Some message");
      logger.info("Some info here.");

      try {
         throw new ArithmeticException();
      } catch (Exception e) {
         Throwable ex = e.getCause();
         System.out.println(e.getCause());
      }
   }
}
