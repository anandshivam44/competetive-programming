import java.util.Scanner;
public class copy_hashcode {

    static int max=0;
    static int limit;
    static int pizza;
    static int abc[];//delete in future
    static int indexing[];
    copy_hashcode obj=new copy_hashcode();
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int max_slices=sc.nextInt();
        limit=max_slices;
        indexing=new int[max_slices];
        //indexing=new int[max_slices];
        int type_of_pizzas=sc.nextInt();
        int arr[]=new int[type_of_pizzas];
        for (int i = 0; i < type_of_pizzas; i++) {
            arr[i]=sc.nextInt();
        }
        printCombination(arr,type_of_pizzas);
        System.out.println(pizza);
        for (int i = 0; i < pizza; i++) {
            System.out.print(indexing[i]+" ");
        }
        sc.close();
    }

    static void printCombination(int arr[], int n_at_a_time) 
    { 
        for (int i = n_at_a_time; i > 0; i--) {
            int r=i;//make combinations taking r at a time
            int data[]=new int[r];
            int store_index[]=new int[r]; 
            combinationUtil(arr, data, 0, n_at_a_time-1, 0, r,store_index);
        }
         
    } 
    
    static void combinationUtil(int arr[], int data[], int start, 
                                int end, int index, int r,int store_index[]) 
    { 
        if (index == r) 
        { 
            int sum=0;
            for (int j=0; j<r; j++) {
                sum+=data[j]; 
            }
            if (sum<=limit && sum>=max) {// it all starts here
                pizza=r;
                int abb[]=new int[r];
                for (int i=0;i<r;i++) {
                    abb[i]=data[i];
                }
                
                for (int i=0;i<r;i++) {//storing index 
                    indexing[i]=store_index[i];
                    
                }
                //indexing=store_index.clone();
                abc=abb;
                max=sum; 
            }
            return; 
        } 

        for (int i=start; i<=end && end-i+1 >= r-index; i++) 
        { 
            data[index] = arr[i];
            store_index[index]=i;
            combinationUtil(arr, data, i+1, end, index+1, r,store_index); 
        } 
    } 
  
    
}