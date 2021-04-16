public class StringObjects {
   public static void main(String[] args) {
      String a="Hello";
      String b="Hello";
      String c=new String("Hello");
      String d=new String("Hello");
      if (a==b) {
         System.out.println("a == b True");
      }
      else{
         System.out.println("a == b False");
      }

      if (a==c) {
         System.out.println("a == c True");
      }
      else{
         System.out.println("a == c False");
      }

      if (d==c) {
         System.out.println("d == c True");
      }
      else{
         System.out.println("d == c False");
      }

      if (d.equals(c)) {
         System.out.println("d equals c True");
      }
      else{
         System.out.println("d equals c False");
      }

      if (a.equals(c)) {
         System.out.println("a equals c True");
      }
      else{
         System.out.println("a equals c False");
      }

      String e=c.intern();
      System.out.println("e = "+e);
      if (e==c) {
         System.out.println("e == c True");
      }
      else{
         System.out.println("e == c False");
      }

      if (e.equals(c)) {
         System.out.println("e equals c True");
      }
      else{
         System.out.println("e equals c False");
      }

      String x="Pepsi";
      String y=x;
      String z=x;
      x="Potato";
      System.out.println(x);
      System.out.println(y);
      System.out.println(z);
   }
}
