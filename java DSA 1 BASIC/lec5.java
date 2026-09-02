import java.util.*;

public class  lec5{
    public static void main(String args[]) {

     //10 times print hello world   
      /* int counter =0;
       while(counter<10){
        System.out.println("hello world");
        counter++;
       }
      }
       System.out.println("print hw 10x"); */
    


//print numbre from 1to 10
 /* int counter = 1;
  while(counter<=10){
    System.out.print(counter + " ");
    counter++;
  }
  System.out.println();*/

//print number from 1to n
/*  Scanner sc =new Scanner(System.in);
 int range =sc.nextInt();
  int counter =1;
   while(counter <= range){
    System.out.print(counter + " ");
    counter++;
   }
System.out.println();*/

//print sum of forst n natural number
/* Scanner sc =new Scanner(System.in);
 int n =sc.nextInt();
 int sum=0;
 int i=1;
 while(i<= n){
    sum += i;
    i++;
 }
 System.out.println("sum is:" + sum);
sc.close();
 }
} */

//*** FOR LOOP***//
  /* for(int i=1;i<=10;i++){
    System.out.println("hello world");
    }
  }
}*/

//square pattern
/* for(int line=1; line<=4;line++){
  System.out.println("****");
 }
}
}*/
/*int line=1;
while(line <= 4){
 System.out.println("****");
 line++;
}
    }
}*/
//reverce pattern
/*int n= 10899;
 while(n>0){
  int lastDigit = n%10;
  System.out.print(lastDigit + "");
  n=n/10;
 }
System.out.println();
    }
 }*/
 //reverce given number
/* int n=10899;
 int rev = 0;

 while(n>0){
  int lastDigit = n%10;
  rev = (rev*10)+lastDigit;
  n=n/10;
 }
 System.out.println(rev);
}
 }*/

 // do - while loop
  /*int counter =1;
  do{
    System.out.println("hello world");
    counter++;

    }while(counter <= 10);

  }
}*/
//break statement
/* for(int i=1; i<=5; i++){
  if(i== 3){
    break;
  }
  System.out.println(i);
 }
 System.out.println("i am out of the loop");
}
} */

//multiple of 10 till by users
     /*Scanner sc = new Scanner(System.in);
     do{
      System.out.println("enter your number :");
      int n = sc.nextInt();

      if(n% 10==0){
        break;
      }
      System.out.println(n);
    }while(true);
    sc.close();
     }
    }*/

    //continue statement
    /*for(int i=1; i<=5;i++){
      if(i== 3){
        continue;
      }
      System.out.println(i);
     }
    }
  }*/
 //display all numbers entered by user expect multiples of 10
 /*Scanner sc =new Scanner(System.in);
   do{
    System.out.print("enter your number:");
    int n =sc.nextInt();
    if(n% 10 == 0){
      continue;
    }
    System.out.println("number was :" + n);
   } while(true); 

 }
} */

//check of number is prime or not
  Scanner sc =new Scanner(System.in);
  int n =sc.nextInt();
  if(n==2){
    System.out.println("n is prime");
  }else{
    boolean isPrime = true;
    for(int i=2;i<=Math.sqrt(n);i++){
      if(n % i ==0){
        isPrime=false;
      }
    }
    if(isPrime==true){
      System.out.println("n is prime"); 
    }else{
      System.out.println("n is not prime"); 
    }
}
        } 
      }
  

