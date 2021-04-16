import java.math.BigDecimal;

public class BigDecimalOracle {
   public static void main(String[] args) {
      // BigDecimal
      // price=BigDecimal.valueOf(1212121212.121212121212121121212121212121212121212121);
      BigDecimal price = new BigDecimal("1212121212.12121212121212112121212121212121212121212");
      System.out.println(price);
      BigDecimal num = new BigDecimal("13131313131313.131313131313131313131313131313131313");
      System.out.println(price.add(num));
   }
}
