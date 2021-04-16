package Inheritance;

public class Food extends Product {
   String category;

   public Food() {
   }

   public Food(String category) {
      this.category = category;
   }

   public String getCategory() {
      return this.category;
   }

   public void setCategory(String category) {
      this.category = category;
   }

   // public Food category(String category) {
   //    setCategory(category);
   //    return this;
   // }

   // @Override
   //  public boolean equals(Object o) {
   //      if (o == this)
   //          return true;
   //      if (!(o instanceof Food)) {
   //          return false;
   //      }
   //      Food food = (Food) o;
   //      return Objects.equals(category, food.category);
   // }

   // @Override
   // public int hashCode() {
   //    return Objects.hashCode(category);
   // }

   // @Override
   // public String toString() {
   //    return "{" +
   //       " category='" + getCategory() + "'" +
   //       "}";
   // }

}
