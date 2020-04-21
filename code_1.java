import java.time.*;
import java.time.DayOfWeek;

class code_1 {
    public static void main(String[] args) {
        // Set a local date whose day is found
        LocalDate localDate = LocalDate.of(2020, 04, 18);

        // Find the day from the local date
        DayOfWeek dayOfWeek = DayOfWeek.from(localDate);

        // Printing the day of the week
        // and its Int value
        System.out.println( dayOfWeek.name());

        // int val = dayOfWeek.getValue();

        // System.out.println("Int Value of " + dayOfWeek.name() + " - " + val);
    }
}