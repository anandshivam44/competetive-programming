// package OracleJava;
enum Condition {
   HOT("I'm HOT"), COLD("I'm HOT"), WARM("I'm HOT");

   private String caution;

   private Condition(String caution) {
      this.caution = caution;
   }

   public String getCaution() {
      return caution;
   }
}

public class ComplexEnumerations {
   public static void main(String[] args) {
      System.out.println(Condition.HOT);
   }
}
