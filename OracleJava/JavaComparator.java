import java.util.Arrays;
import java.util.Comparator;

public class JavaComparator {
   public static void main(String[] args) {
      Product products[] = { new Product("Water"), new Product("Brinjal"), new Product("Caroot"),
            new Product("Apple") };
      Arrays.sort(products, new ProductNameSorter());
      for (Product product : products) {
         System.out.println(product.getProductName());
      }

      // System.out.println(Arrays.toString(products));
   }
}

class ProductNameSorter implements Comparator<Product> {
   public int compare(Product product1, Product product2) {
      return (-1) * product1.getProductName().compareTo(product2.getProductName());
   }
}
