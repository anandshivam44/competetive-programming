public class ReUseConstructor {

   ReUseConstructor(String a, String b) {
      this(a);
      System.out.println(a + " " + b);
   }

   ReUseConstructor(String a) {
      System.out.println(a);
   }

   public static void main(String[] args) {
      ReUseConstructor ob1 = new ReUseConstructor("Shivam", "Anand");
      ReUseConstructor ob2 = new ReUseConstructor("Anand2222");
   }
}
