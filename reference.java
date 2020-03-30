/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.Arrays;
public class reference
{
  public static void main (String[]args)
  {
    int[] array = { 23, 43, 55, 12 };
    int newLength = array.length;
    int[] copiedArray = Arrays.copyOf (array, newLength);
    System.out.println (Arrays.toString (copiedArray));
    
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    newLength = arr.length;
    copiedArray = Arrays.copyOf (arr, newLength);
    System.out.println (Arrays.toString (copiedArray));
    
    int abb[]={1,2,3};
    newLength = abb.length;
    copiedArray = Arrays.copyOf (abb, newLength);
    System.out.println (Arrays.toString (copiedArray));
  }
}
