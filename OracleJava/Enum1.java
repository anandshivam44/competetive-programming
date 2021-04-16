/**
 * Enum1
 */

enum Color {
   RED, GREEN, BLUE,YELLOW;

   Color() {
      System.out.println("I'm Constructor");
      // this.toString();
   }

   void function() {
      System.out.println("I'm a function");
   }
}

public class Enum1 {

   public static void main(String[] args) {
      Color c1 = Color.RED;
      System.out.println(c1);
      c1.function();

      Color c2 = Color.GREEN;
      System.out.println(c2);

      Color c3 = Color.BLUE;
      System.out.println(c3);

      System.out.println(Color.valueOf("RED"));
      System.out.println(Color.RED.ordinal());

   }
}