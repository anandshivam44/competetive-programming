
import java.time.LocalDate;
import java.time.Month;
import java.time.temporal.ChronoUnit;

public class demo {

    public static void main(String[] args) {
        LocalDate dateBefore = LocalDate.of(2020, Month.JANUARY, 1);
        LocalDate dateAfter = LocalDate.of(2020, Month.JANUARY, 2);
        long noOfDaysBetween = ChronoUnit.DAYS.between(dateBefore, dateAfter);
        System.out.println(noOfDaysBetween);
    }
}