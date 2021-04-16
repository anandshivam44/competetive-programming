public class StringBuilderObject {
   public static void main(String[] args) {
      StringBuilder str = new StringBuilder("Shivam");
      str.append(" Anand is a good boy");
      str.insert(20, "TTT");
      System.out.println(str);
      System.out.println(str.capacity());

      str.delete(5, 8);
      System.out.println(str);
      str.reverse();
      System.out.println(str);
   }
}
