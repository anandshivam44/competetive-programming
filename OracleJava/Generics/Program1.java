import java.math.BigDecimal;

public class Program1<T> {

   public static void main(String[] args) {
      Program1<BigDecimal> ob = new Program1<BigDecimal>();
      BigDecimal num = new BigDecimal("155555555555555555555555555555");
      ob.methodName(num);

   }

   public void methodName(T objectName) {
      System.out.println(objectName);
   }
}
