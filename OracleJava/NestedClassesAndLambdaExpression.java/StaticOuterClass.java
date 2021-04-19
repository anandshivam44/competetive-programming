public class StaticOuterClass {
   static class Inner {
      void printtt() {
         System.out.println("Printed Something");
      }
   }

   public static void main(String[] args) {
      StaticOuterClass.Inner ob = new StaticOuterClass.Inner();
      ob.printtt();
      // printtt();
   }
}
