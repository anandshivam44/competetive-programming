import java.math.BigDecimal;

// package Inheritance;

public class Implement extends Product {

   int num = 200;

   {
      System.out.println("I'm a no tag block in Implement");
   }
   static {
      System.out.println("I'm a static tag block in Implement");
   }

   public Implement() {
      // super(56);
      this(100);
      System.out.println("I'm Implement Constructor");

   }

   public Implement(int num) {
      System.out.println("I'm Implement Constructor " + num);
   }

   public static void main(String[] args) {
      Implement ob = new Implement();
      ob.test();
      System.out.println(ob.getPrice());
      // System.out.println(ob.key);
      // System.out.println();
   }

   void test() {
      System.out.println(super.num);
   }

   @Override
   public BigDecimal getPrice() {
      System.out.println(super.getPrice());
      return new BigDecimal("10000.00001");
   }
}

// class Employee {
// float salary = 40000;
// }

// class Implement extends Employee {
// int bonus = 10000;

// public static void main(String args[]) {
// Implement p = new Implement();
// System.out.println("Implement salary is:" + p.salary);
// System.out.println("Bonus of Implement is:" + p.bonus);
// }
// }