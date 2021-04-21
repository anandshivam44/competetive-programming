
public class mth1 {
   public static void main(String[] args) {
      // Runtime r = Runtime.getDefault();
      Runnable runt = () -> {
         System.out.println("I am some thread");
      };
      Lateral la = new Lateral();
      new Thread(runt).start();
      // int tt = r.availableProcessors();
      System.out.println("I'm main thread");
   }
}
