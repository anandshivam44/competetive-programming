public class VariableNumberArguments {
   public static void main(String[] args) {
      provokeMe(1, 2, 3, 4, 5, 6, 7, 8, 9);
   }

   private static void provokeMe(int... array) {
      for (int i : array) {
         System.out.println(i);
      }
   }
}
