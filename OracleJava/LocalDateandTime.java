import java.text.NumberFormat;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.ZonedDateTime;
import java.time.LocalTime;
import java.time.Month;
import java.util.Locale;

// import jdk.vm.ci.meta.Local;

public class LocalDateandTime {
   public static void main(String[] args) {
      LocalDate date = LocalDate.now();
      System.out.println(date);

      LocalTime time = LocalTime.now();
      System.out.println(time);

      LocalDateTime dateTime = LocalDateTime.now();
      System.out.println(dateTime);
      System.out.println();

      LocalDate someDay = LocalDate.of(2021, Month.APRIL, 19);
      System.out.println(someDay);

      ZonedDateTime ztime = ZonedDateTime.now();
      System.out.println(ztime);

      long price = 29999999;
      Locale loc = new Locale("hi", "IN");
      NumberFormat currencyFormat = NumberFormat.getCurrencyInstance(loc);
      NumberFormat numberFormat = NumberFormat.getNumberInstance(loc);

      String formattedNum = numberFormat.format(price);
      System.out.println(formattedNum);

      String formattedPrice = currencyFormat.format(price);
      System.out.println(formattedPrice);

   }
}
