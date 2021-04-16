public class ShortCircuitEvaluation {
   public static void main(String[] args) {
      int a = 3, b = 2;
      if (a > b | ++b == 3) { // Full Evaluation
         System.out.println("True");
         System.out.println("a = " + a + " b = " + b);
      } else {
         System.out.println("False");
         System.out.println("a = " + a + " b = " + b);

      }

      a = 3;
      b = 2;
      if (a > b || ++b == 3) { // Short-circuit evaluation 
         System.out.println("True");
         System.out.println("a = " + a + " b = " + b);
      } else {
         System.out.println("False");
         System.out.println("a = " + a + " b = " + b);

      }
   }
}
