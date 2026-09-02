import java.util.*;

public class lec8 {
    public static void hollow_rectangle(int totRows, int totCols) {
       //outer loop
       for(int i=1; i<=totRows; i++){
//inner loop
      for(int j=1; j<=totCols; j++){
        //cell(i,j)
        if (i==1 || i==totRows || j==1 || j==totCols){
            //boundrycells
            System.out.print("*");
        }else{
            System.out.print(" ");
        }
      }
     System.out.println(" ");
         }
    }
    
    public static void inverted_rotated_half_pyramid(int n) {
       //outer loop
       for(int i=1; i<=n; i++){
        //spaces
      for(int j=1; j<=n-i; j++){
         System.out.print(" ");
      }
            //star
            for(int j=1; j<=i;j++){
            System.out.print("*");
      }
     System.out.println(" ");
         }
    }
         public static void inverted_half_pyramid_withnumber(int n) {
    //outer loop
       for(int i=1; i<=n; i++){
//inner loop
      for(int j=1; j<=n-i+1; j++){
            System.out.print(j + " ");
      }
     System.out.println(" ");
         }
    }
    public static void floyds_triangle(int n) {
       //outer loop
       int counter = 1;
       for(int i=1; i<=n; i++){
//inner loop -how many times will counter be printed 
      for(int j=1; j<=i; j++){
            System.out.print(counter + " ");
            counter++;
        }
     System.out.println(" ");
         }
    }
     public static void zero_one_triangle(int n) {
       //outer loop
       for(int i=1; i<=n; i++){
//inner loop  
      for(int j=1; j<=i; j++){
          if((i+j)%2 ==0){
            System.out.print("1");
        }else{
            System.out.print("0");
        }
    }
     System.out.println();
         }
    }
     public static void butterfly(int n) {
     //outer loop -1st half
       for(int i=1; i<=n; i++){
        //stars-i
            for(int j=1; j<=i;j++){
            System.out.print("*");
            }
        //spaces-2*(n-i)
      for(int j=1; j<=2*(n-i); j++){
         System.out.print(" ");
      }
            //star-i
            for(int j=1; j<=i;j++){
            System.out.print("*");
      }
      System.out.println(" ");
    }
      //2nd half
      for(int i=n; i>=1;i--){
        //stars-i
            for(int j=1; j<=i;j++){
            System.out.print("*");
            }
        //spaces-2*(n-i)
      for(int j=1; j<=2*(n-i); j++){
         System.out.print(" ");
      }
            //star-i
            for(int j=1; j<=i;j++){
            System.out.print("*");
      }
     System.out.println(" ");
    }
  }
     public static void solid_rhombus(int n) {
     //outer loop 
       for(int i=1; i<=n; i++){
        //spaces-(n-i)
      for(int j=1; j<=(n-i); j++){
         System.out.print(" ");
      }
            //star-i
            for(int j=1; j<=n;j++){
            System.out.print("*");
      }
      System.out.println();
    }
}
  public static void hollow_rhombus(int n) {
     //outer loop 
       for(int i=1; i<=n; i++){
        //spaces-(n-i)
      for(int j=1; j<=(n-i); j++){
         System.out.print(" ");
      }

      //hollow rectangle
//inner loop
      for(int j=1; j<=n; j++){
        //cell(i,j)
        if (i==1 || i==n || j==1 || j==n){
            //boundrycells
            System.out.print("*");
        }else{
            System.out.print(" ");
        }
    }
      System.out.println(" ");
    }
 }
 
     public static void diamond(int n) { 
     //outer loop -1st half
       for(int i=1; i<=n; i++){
        //spaces-(n-i)
      for(int j=1; j<=(n-i); j++){
         System.out.print(" ");
      }
            //star-i
            for(int j=1; j<=(2*i)-1;j++){
            System.out.print("*");
      }
      System.out.println(" ");
    }
      //2nd half
      for(int i=n; i>=1;i--){
        //spaces-(n-i)
      for(int j=1; j<=(n-i); j++){
         System.out.print(" ");
      }
            //star-i
            for(int j=1; j<=(2*i)-1;j++){
            System.out.print("*");
      }
     System.out.println(" ");
    }
  }
 public static void main(String[] args) {
    hollow_rectangle(10,10);
    inverted_rotated_half_pyramid(10);
    inverted_half_pyramid_withnumber(5);
    floyds_triangle(4);
    zero_one_triangle(10);
    butterfly(6); 
    solid_rhombus(7);
    
    hollow_rhombus(8);
    diamond(8);
 }
}
