import java.util.Scanner;

public class lec4 {
    public static void main(String args[]) {
        //if-else statement
       /* int age =16;
        if(age>=18) {
            System.out.println("adult:driver,vote");
        }
        if(age>13 && age<18){
            System.out.println("teenager");
    }else {
            System.out.println("not adult:");
            }
        }
    }*/
    //print the largest of 2
   /*  int a=1;
    int b=3;
    if(a>=b){
        System.out.println("a is largest of two");
    }
    else{ 
       System.out.println("b is largest of two"); 
    }
 }
}*/
//print if a number is odd or even
  /*Scanner sc = new Scanner(System.in);
  int n = sc.nextInt();
  if(n%2==0){
   System.out.println("the number is even");  
  }else{
    System.out.println("the number is odd");
  }
  sc.close();
  }
}*/

 //else-if statement
  /*int age =13;
   if(age>=18) {
            System.out.println("adult:driver,vote");
        }
       else if(age>=13 && age<18){
            System.out.println("teenager");
    }else {
            System.out.println("child");
            }
        }
 }*/

 //income tax calculator
 /*Scanner sc = new Scanner(System.in);
  int income = sc.nextInt();
  int tax;
  if(income < 500000){
    tax = 0;
  }
  else if(income>=500000 && income<1000000){
    tax=(int)(income *0.2);
  } else{
    tax=(int)(income * 0.3);
  }
 System.out.println("your tax is:" + tax);
 sc.close();
}
  }*/

  //print the largest of 3 number
  /*int a=2;
  int b=5;
  int c=7;
  if((a>=b) &&(a>=c)){
    System.out.println("the largest number is a");

  }
  else if(b>=c){
    System.out.println("the largest number is b");
  }
  else{
    System.out.println("the largest number is c");
    }
  }
 }*/
//ternary operator
      /*int number =4;
      String type=((number%2)==0)?"even":"odd";
      System.out.println(type);
    }
}*/
//check if a student will pass or fail
 /*int marks=311;
  String reportCard=marks >=33? "pass":"fail";
  System.out.println(reportCard);
    }
}*/

//Switch statement
  /*  int number = 3;
   switch(number){
    case 1:
        System.out.println("samosa");
        break;
    case 2:
        System.out.println("burger");
        break;
    case 3:
        System.out.println("banana shake");
        break;
    default:
        System.out.println("we wake up");
        
   }
 }
}*/
//making a calculator
Scanner sc =new Scanner(System.in);
  System.out.println("enter a:");
  int a= sc.nextInt();
  System.out.println("enter b:");
  int b= sc.nextInt();
  System.out.println("enter operator:");
  char operator =sc.next().charAt(0);

switch(operator){
     case '+' : System.out.println(a+b);
               break;
     case '-' : System.out.println(a-b);
               break;
     case '*' : System.out.println(a*b);
               break;
     case '/' : System.out.println(a/b);
               break;
     case '%' : System.out.println(a%b);
               break;
     default : System.out.println("wrong operator");
  }
  sc.close();
    }
} 