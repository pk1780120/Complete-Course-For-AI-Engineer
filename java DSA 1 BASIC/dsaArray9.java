/*import java.util.*;

public class  dsaArray9  {
    public static void main(String args[]) {
       Scanner sc = new Scanner(System.in); 
       int marks[] = new int[79];
       //int phy;
       //phy = sc.nextInt();

       System.out.println("length of array =" + marks.length); 


      /*  marks[0] = sc.nextInt();//phy
       marks[1] = sc.nextInt();//chem
       marks[2] = sc.nextInt();//math
       System.out.println("phy :" + marks[0]);
       System.out.println("chem :" + marks[1]);
       System.out.println("math :" + marks[2]);

       //marks[2] = 100;
       //marks[2] = marks[2] * 2;//(use +,-,*,/ ) any one
       // System.out.println("math :" + marks[2]);

       int percentage = (marks[0] + marks[1] + marks[2])/3;
       System.out.println("percentage = " + percentage + "%");
    sc.close();
        }
    }
}
 }*/

//code-2
 import java.util.*;

public class  dsaArray9  {
  /*   public static void update(int marks[],int nonChangeable) {
     for(int i=0;i<marks.length; i++){
        marks[i] =  marks[i] + 1;//(use +,-,*,/ ) any one by call by refrence
     }
     }
    public static void main(String args[]) { 
        int marks[] ={97,98,99};
        int nonChangeable = 5;
        update(marks, nonChangeable);
        System.out.println(nonChangeable);

        //print our marks
        for(int i=0;i<marks.length;i++){
            System.out.print(marks[i]+" ");
        }
        System.out.println();
        }
    }*/


    //code3-linear search
     /*public static int linearSearch(int numbers[],int key) {
        for(int i=0;i<numbers.length; i++){
            if(numbers[i]==key){
                return i;
            }
        }
        return -1;
    }

public static void main(String args[]) { 
    int numbers[] = {2,4,6,8,10,12,14,16};
   // String menu[]={"dosa","samosa","chhole" ..}; use and write code
    int key =20;

    int index = linearSearch(numbers, key);
    if(index==-1){
        System.out.println("NOT found");
    }else{
        System.out.println("key is at index :" + index);
    }
}
}*/

//code-4 largest numbr

    /*  public static int getLargest(int numbers[]) {
        int largest = Integer.MIN_VALUE;//INFINITY
        int smallest=Integer.MAX_VALUE;
        for(int i=0;i<numbers.length; i++){
            if(largest<numbers[i]){
                largest =numbers[i];
            }
                if(smallest>numbers[i]){
                smallest =numbers[i];
            }
        }
        System.out.println("smallest value is :" + smallest);
        return largest;
    }
 
public static void main(String args[]) { 
    int numbers[] = {1,2,6,3,5};
        System.out.println("largest value is :" + getLargest(numbers));
    }
}*/

//code -4 binary key

     /*public static int binarySearch(int numbers[],int key) {
        int start = 0,end = numbers.length-1;

    while (start<=end) {
        int mid = (start + end)/2;

        //comparisons
            if(numbers[mid]==key){
                return mid;
            }
                if(numbers[mid]< key){
                start =mid+1;
            }else{//left
                end = mid-1;
            }
        }
        return -1;
    }
 
public static void main(String args[]) { 
    int numbers[] = {2,4,6,8,10,12,14};
    int key =10;
        System.out.println("index for key is :" + binarySearch(numbers,key));
    }
}*/

//code-5

     public static void reverse(int numbers[]) {
        int first = 0,last = numbers.length-1;

    while (first< last) {
//swap
     int temp = numbers[last];
     numbers[last]=numbers[first];
     numbers[first]=temp;
    first++;
    last--;
    }
}
public static void main(String args[]) { 
    int numbers[] = {2,4,6,8,10,12,14};
    reverse (numbers);
   //print
   for(int i=0;i<numbers.length;i++){
    System.out.print(numbers[i] + " ");
   }
        System.out.println();
    }
}

//code-6
/*public static void printpairs(int numbers[]) {
        int tp=0;
        for(int i=0; i<numbers.length;i++){
        int curr = numbers[i];
        for(int j=i+1;j<numbers.length;j++){
            System.out.print("(" + curr + "," + numbers[j]+")");
            tp++;
        }
        System.out.println();
    }
    System.out.println("totals pairs =" + tp);
}
public static void main(String args[]) { 
    int numbers[] = {2,4,6,8,10};
   printpairs(numbers);
    }
}*/

//code-7
 /*public static void printSubarrays(int numbers[]) {
        int ts=0;
        for(int i=0; i<numbers.length;i++){
        int start = i;
        for(int j=i;j<numbers.length;j++){
            int end = j;
            for(int k =start;k<=end;k++){
            System.out.print(numbers[k] + " ");
        }
        ts++;
        System.out.println();
    }
    System.out.println();
}
    System.out.println("total subarrays = " + ts);
}
 
public static void main(String args[]) { 
    int numbers[] = {2,4,6,8,10};
   printSubarrays(numbers);
    }
}*/

