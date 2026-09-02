/*import java.util.*;
public class lec7 {
     public static void printhelloworld() {
        System.out.println("hello world");
        System.out.println("hello world");
        System.out.println("hello world");
        return;
     }
     public static int calculateSum(int num1,int num2){//parameter or formal parameter
        int sum =num1 +num2;
        return sum;
     }

 public static void main(String args[]) {
     Scanner sc = new Scanner(System.in);
     printhelloworld();
     int a = sc.nextInt();
     int b = sc.nextInt();
     int sum = calculateSum(a, b);//argument or actual parameter  
     System.out.println("sum is:" + sum);
     sc.close();
 }
}*/

//import java.util.*;
//public class lec7 {
     /*public static void swap(int a, int b){
     
    //swap
    int temp =a;
    a = b;
    b = temp;
 System.out.println("a = " + a);
  System.out.println("b =" + b);
     }
 public static void main(String args[]) {
    int a = 5;
    int b =10;
    swap(a,b);
 System.out.println("a = " + a);
  System.out.println("b =" + b);*/

  //product of a and b
  /*public static int multiply(int a ,int b){
    int product = a*b;
    return product;
  }
   public static void main(String args[]) {
    int a = 3;
    int b = 5;
      int prod=multiply(a, b);
      System.out.println(" a * b = " + prod);
      
      prod=multiply(10, 20);
      System.out.println(" a * b = " + prod);
      
      prod=multiply(7502, 0523207);
      System.out.println(" a * b = " + prod);
 }
 } */
  //factorial of number
//  public static int factorial(int n){
 //   int f = 1;

//    for (int i=1; i<=n; i++ ){
    //    f = f * i;
  //  }
//    return f;
// }
/*public static void main(String args[]) {
System.out.println(factorial(7));
}
}*/

//binomial coefficient
  /*public static int binCoeff(int n,int r){
   int fact_n = factorial(n);
   int fact_r = factorial(r);
   int fact_nmr= factorial(n-r);
   int binCoeff =fact_n/(fact_r *fact_nmr);
   return binCoeff;
 }
public static void main(String args[]) {
System.out.println(binCoeff(5,2));
} 
} */
//funct to calculate sum of 2 numb
//using parameter
/*import java.util.*;
public class lec7 {
public static int sum(int a, int b){
   return a+b;
}
//func to calc sum of 3 nums
public static int sum(int a, int b,int c){
   return a+b+c;
}

public static void main(String args[]) {
System.out.println(sum(3,5));
System.out.println(sum(5,2,1));
}
}*/
//using data types

/*import java.util.*;
public class lec7 {
public static int sum(int a, int b){
   return a+b;
}
//func to calc sum of 3 nums
public static float sum(float a, float b){
   return a+b;
}

public static void main(String args[]) {
System.out.println(sum(3,5));
System.out.println(sum(3.2f,4.8f));
}
}*/

//check if a number is prime or not
/*import java.util.*;
public class lec7 {
public static boolean isPrime(int n){
   boolean isPrime = true;
   for(int i=2;i<=n-1;i++){
      if(n%i==0){
         isPrime = false;
         break;
      }
   }
   return isPrime;
}
public static void main(String args[]) {
System.out.println(isPrime(12));
}
}*/

//optimized method always this method to check prime or not 
/*import java.util.*;
public class lec7 {
public static boolean isPrime(int n){
  if(n == 2){
  return true;
}
   for(int i=2;i<=Math.sqrt(n);i++){
      if(n%i==0){
         return false;
      }
   }
   return true;
}
public static void main(String args[]) {
System.out.println(isPrime(131));
}
}*/
  /*import java.util.*;

public class lec7 {

    // 1. Prime check function
    public static boolean isPrime(int n) {
        if (n == 2) {
            return true; // 2 ek prime number hai
        }
        for (int i = 2; i <= Math.sqrt(n); i++) { // 2 se sqrt(n) tak check karo
            if (n % i == 0) {
                return false; // agar kisi se divide ho gaya toh prime nahi hai
            }
        }
        return true; // kisi se divide nahi hua toh prime hai
    }

    // 2. Print all primes in a range
    public static void primesInRange(int n) {
        for (int i = 2; i <= n; i++) { // 2 se n tak loop
            if (isPrime(i)) { // agar i prime hai
                System.out.print(i + " "); // print karo
            }
        }
        System.out.println(); // ek line break
    }

    // 3. Binary to Decimal conversion
    public static void binToDec(int binNum) {
        int myNum = binNum; // original number ko store karo
        int pow = 0; // power of 2
        int decNum = 0; // decimal number

        while (binNum > 0) {
            int lastDigit = binNum % 10; // last digit nikalo
            decNum = decNum + (lastDigit * (int) Math.pow(2, pow)); // us digit ko 2 ki power se multiply karo
            pow++; // power badhao
            binNum = binNum / 10; // next digit ke liye
        }
        System.out.println("decimal of " + myNum + " = " + decNum); // result print karo
    }

    // 4. Decimal to Binary conversion
    public static void decToBin(int n) {
        int myNum = n; // original number ko store karo
        int pow = 0; // power of 10
        int binNum = 0; // binary number

        while (n > 0) {
            int rem = n % 2; // remainder nikalo (0 ya 1)
            binNum = binNum + (rem * (int) Math.pow(10, pow)); // usko 10 ki power se multiply karo
            pow++; // power badhao
            n = n / 2; // next digit ke liye
        }
        System.out.println("binary  form of " + myNum + " = " + binNum); // result print karo
    }

    // 5. Main function
    public static void main(String args[]) {
        System.out.println(isPrime(17)); // 16 prime hai ya nahi (false print hoga)
        primesInRange(250); // 2 se 150 tak saare prime numbers print honge
        binToDec(1010); // 101 (binary) ko decimal me convert karega (output: 5)
        decToBin(149); // 14 (decimal) ko binary me convert karega (output: 1110)
    }
}*/

//SCOPE
//method scope
  //block scope
