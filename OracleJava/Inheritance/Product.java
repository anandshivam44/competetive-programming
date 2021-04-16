// package Inheritance;

import java.math.BigDecimal;
import java.time.LocalDate;

public class Product {

   int id;
   String name;
   BigDecimal price;
   LocalDate bestBefore;
   public int key=404;

   public Product() {
   }

   public Product(int id, String name, BigDecimal price, LocalDate bestBefore) {
      this.id = id;
      this.name = name;
      this.price = price;
      this.bestBefore = bestBefore;
   }

   public int getId() {
      return this.id;
   }

   public void setId(int id) {
      this.id = id;
   }

   public String getName() {
      return this.name;
   }

   public void setName(String name) {
      this.name = name;
   }

   public BigDecimal getPrice() {
      return this.price;
   }

   public void setPrice(BigDecimal price) {
      this.price = price;
   }

   public LocalDate getBestBefore() {
      return this.bestBefore;
   }

   public void setBestBefore(LocalDate bestBefore) {
      this.bestBefore = bestBefore;
   }

   public void applyDiscount(BigDecimal val){

   }

   // public Product id(int id) {
   //    setId(id);
   //    return this;
   // }

   // public Product name(String name) {
   //    setName(name);
   //    return this;
   // }

   // public Product price(BigDecimal price) {
   //    setPrice(price);
   //    return this;
   // }

   // public Product bestBefore(LocalDate bestBefore) {
   //    setBestBefore(bestBefore);
   //    return this;
   // }

   // @Override
   // public boolean equals(Object o) {
   //    if (o == this)
   //       return true;
   //    if (!(o instanceof Product)) {
   //       return false;
   //    }
   //    Product product = (Product) o;
   //    return id == product.id && Objects.equals(name, product.name) && Objects.equals(price, product.price)
   //          && Objects.equals(bestBefore, product.bestBefore);
   // }

   // @Override
   // public int hashCode() {
   //    return Objects.hash(id, name, price, bestBefore);
   // }

   // @Override
   // public String toString() {
   //    return "{" + " id='" + getId() + "'" + ", name='" + getName() + "'" + ", price='" + getPrice() + "'"
   //          + ", bestBefore='" + getBestBefore() + "'" + "}";
   // }

}
