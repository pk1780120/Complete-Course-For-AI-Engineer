// OOPM CONCEPT
/*//   Q1.class and objects
#include <iostream>
#include <string>

using namespace std;
class student
{
    // properties
    string name;
    float cgpa;

    // methods / functions /memberfunctions
    void getpercentage()
    {
        cout << (cgpa * 10) << "%" << endl;
    }
};

// Q2.instagram account & bio
class user
{
    int id;
    string username;
    string password;
    string bio;

    void deactivates()
    {
        cout << "deleting account\n";
    }
    void editbio(string newbio)
    {
        bio = newbio;
    }
};
// Q3. using public and private access modifier
class student1
{
public:
    string password;
    string name;
    float cgpa;
    void getpercentage()
    {
        cout << (cgpa * 10) << "%\n";
    }
};
  //Q4.SETTERS & GETTERS METHOD
    class stu{
        string name;
        float cgpa;
    public:
    void getpercentage(){
        cout<<(cgpa * 10)<<"%\n";
    }
    //setters
    void setname(string nameval){
        name = nameval;
    }
    void setcgpa(float cgpaval){
        cgpa = cgpaval;
    }
    //getters
    string getname(){
        return name;
    }
    float getcgpa(){
        return cgpa;
    }
    };

    //Q5. create program car with CONSTRUCTOR
     class car{
        string name;
        string color;

    public:
    //constructer define same name as class name
      // wiathout parameters
       car(){
        cout<<"consructer without parameter\n";
       }
         // parameters
      //car(string namevalue,string colorvalue){
        //cout <<" constructer with parameters.\n";
        //name = namevalue;
       // color = colorvalue;
      //}
      car(string name,string color){
        cout <<" constructer with parameters.\n";
          this-> name=name;
          this-> color=color;
      }

       void start(){
        cout<<"car has started..\n";
       }
       void stop(){
        cout<< "car has stopped\n";
       }
       //getter
       string getname(){
        return name;
       }
     };

int main()
{
    student s2;
    cout << sizeof(s2) << endl;

    student1 s1; // objects
    s1.name = "pawan";
    s1.cgpa = 9.0;
    s1.password = "abgb";
    cout << s1.name << endl;
    cout << s1.cgpa << endl;
    cout << s1.password << endl;
    s1.getpercentage();

    stu s3;
    s3.setname("kawan");
    s3.setcgpa(7.67);
    cout<<s3.getname()<<endl;
    cout<<s3.getcgpa()<<endl;

    car c0;//non parameter
    car c1("thar mahindra 1025","black");//parameters
    car c2("rafal jet 1925","sky");//parameters

     cout<<" car_name : " << c1.getname();
    return 0;
} */
// problem question constructer
/*#include <iostream>
#include <iostream>
using namespace std;
  class user {
   private:
   int id;
   string password;
   public:
   string username;
   user(int id){
       this ->id = id;

   }
   //getter
   string getpassword(){
       return password;
   }
    //setter
    void setpassword(string password){
       this -> password = password;
    }

  };
int main() {
   user user1(211);
   user1.username = "pk1780";
   user1.setpassword("jaas");

   cout <<"username :"<<user1.username<<endl;
       cout <<"password :"<<user1.getpassword()<<endl;

   return 0;
} */

// copy constructer
/*#include <iostream>
#include <string>
using namespace std;
 class car{
   public:
   string name;
   string color;
    car(string name,string color){
         this-> name=name;
         this-> color=color;
     }
     car(car &original){
       cout<<"copying original to new..\n";
       name = original.name;
       color =original.color;
     }
 };
int main() {
   car c1("fortuner 2025","white");
   car c2(c1);
  cout << c2.name<<endl;
  cout<<c2.color <<endl;
   return 0;
}*/
// SHALLOW & DEEP COPY
/*#include <iostream>
#include <string>
using namespace std;
 class car{
   public:
   string name;
   string color;
   int *mileage;
    car(string name,string color){
         this-> name=name;
         this-> color=color;
         mileage = new int;//dynamic allocation
         *mileage =12;
     }
     car(car &original){
       cout<<"copying original to new..\n";
       name = original.name;
       color =original.color;
       mileage = original.mileage;
     }
 };
int main() {

   car c1("fortuner 2025","white");
   car c2(c1);
  cout << c2.name<<endl;
  cout<<c2.color <<endl;
  cout<<*c2.mileage<<endl;
  *c2.mileage=10;
  cout << *c1.mileage << endl;//10
   return 0;
}*/

// DESTRUCTOR
/*#include <iostream>
#include <string>
using namespace std;
class car{
  public:
  string name;
  string color;
  int *mileage;
   car(string name,string color){
        this-> name=name;
        this-> color=color;
        mileage = new int;//dynamic allocation
        *mileage =12;
    }
    car(car &original){
      cout<<"copying original to new..\n";
      name = original.name;
      color =original.color;
       mileage = new int;
      *mileage = *original.mileage;
    }
    ~car(){
      cout<<"deleting object..\n";
      if(mileage != NULL){
          delete mileage;
          mileage = NULL;
      }
    }
};
int main() {
  car c1("fortuner 2025","white");

 cout << c1.name<<endl;
 cout<<c1.color <<endl;
 cout<<*c1.mileage<<endl;
  return 0;
}*/

// INHERITANCE
// SINGLE INHERTENCE

/*#include <iostream>
#include <iostream>
using namespace std;
 class animal {
   public:
   string color;
   void eat(){
       cout << "eat\n";
   }
  void breath(){
   cout<<"breath\n";
  }
 };
 class fish: public animal {
   public:
   int fins;

   void swim(){
       cout<<"swim\n";
   }
 } ;
int main() {
   fish f1;
   f1.fins=5;
   cout<<f1.fins<<endl;
   f1.swim();
   f1.eat();
   f1.breath();
   return 0;
}*/
// multilevel INHERTENCE
/*#include <iostream>
#include <string>
using namespace std;
 class animal{
   public:
   void eat(){
       cout <<"eats\n";
   }
  void breath(){
  cout<< "breath\n";
  }
 };
 class mammal:public animal{
   public:
   string bloodtype;
   mammal(){
       bloodtype = "warm";
   }
 };
 class dog: public mammal{
   public:
   void tailwag(){
       cout<<"a dog wags is tail : ";
   }

 };
int main() {
   dog d1;
   d1.eat();
   d1.breath();
   d1.tailwag();
   cout<<d1.bloodtype<<endl;
   return 0;
}*/

// MULTIPLE INHERITANCE
/*#include <iostream>
#include <string>
using namespace std;
class teacher
{
public:
    int salary;
    string subjects;
};
class stu
{
public:
    int rollno;
    float cgpa;
};
class ta : public teacher, public stu
{
public:
    string name;
};
int main()
{
    ta ta1;
    ta1.name = "pawn kumar";
    ta1.subjects = "c++ dsa";
    ta1.cgpa = 7.67;

    cout << ta1.name << endl;
    cout << ta1.subjects << endl;
    cout << ta1.cgpa << endl;
    return 0;
}*/

// HIERARCHICAL INHERITANCE
/*#include <iostream>
using namespace std;

// BASE CLASS
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
    void breath() {
        cout << "Animal breathes" << endl;
    }
};

// DERIVED CLASS 1
class Bird : public Animal {
public:
    void fly() {
        cout << "Bird flies" << endl;
    }
};

// DERIVED CLASS 2
class Fish : public Animal {
public:
    void swim() {
        cout << "Fish swims" << endl;
    }
};

// DERIVED CLASS 3
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks" << endl;
    }
};

// DERIVED CLASS 4
class Monkey : public Animal {
public:
    void jump() {
        cout << "Monkey jumps" << endl;
    }
};

int main() {

    Bird b;
    b.eat();       // inherited from Animal
     b.fly();       // Bird own function

    Fish f;
    f.breath();    // inherited
    f.swim();      // Fish own function

    Mammal m;
    m.walk();

    Monkey mk;
    mk.jump();

    return 0;
}*/
// POLMORPHISM
// COMPILE TIME POLYMORPHISM
// FUNCTIONOVERLOSDING
/*#include <iostream>
#include <string>
using namespace std;
   class print{
    public:
    void show(int x){
        cout<<"int: "<<x<<endl;
    }
    void show(string str){
        cout<<"string: "<<str<<endl;
    }
   };
int main() {
    print obj1;
    obj1.show(25);
    obj1.show("our tution");
    return 0;
}*/
// operator overloading
/*#include <iostream>
#include <string>
using namespace std;
class complex
{
    int real;
    int img;

public:
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void shownum()
    {
        cout << real << " + " << img << " i\n ";
    }
     //OPERATOROVERLOADING
     complex operator +(complex &c2){
        int resreal = this->real + c2.real;
        int resimg =this ->img + c2.img;
        complex c3(resreal,resimg);
            return c3;
     }
};
int main()
{
    complex c1(1, 2);
    complex c2(3, 4);
    c1.shownum();
    c2.shownum();

   complex c3= c1+c2;
   c3.shownum();
    return 0;
}*/
// RUNTIME POLYMORPHISM
// function overriding
/*#include <iostream>
#include <string>
using namespace std;
 class parent{
  public:
  void show(){
      cout <<"parent class show..\n";
  }

 };
 class child :public parent {
  public:
  void show(){
      cout<<"child class show..\n";
  }
 };
int main() {
  child c1;
  c1.show();
  return 0;
}*/
// virtual function
/* #include <iostream>
 #include <string>
 using namespace std;
  class parent{
   public:
   void show(){
       cout <<"parent class show..\n";
   }
  virtual void hello(){
      cout<<"parent hello\n";
  }
  };
  class child :public parent {
   public:
   void show(){
       cout<<"child class show..\n";
   }
   void hello(){
       cout <<"child hello\n";
   }
  };
 int main() {
   child c1;
   parent *ptr;

   ptr = &c1;//run time binding
   ptr->hello();//virtual function
   return 0;
 }*/
// ABSTRACTION
/*#include <iostream>
#include <string>
using namespace std;
// abstract class
class shape
{
public:
    virtual void draw() = 0; // abstract funct,pure virtua function
};
class circle : public shape
{
public:
    void draw()
    {
        cout << "draw circle\n";
    }
};
class square : public shape
{
public:
    void draw()
    {
        cout << "draw square\n";
    }
};

int main()
{
    circle cir1;
    cir1.draw();

    square squ1;
    squ1.draw();

    // shape s1; error dega
    // s1.draw();
    return 0;
}*/
// static keyword in function
//
/* #include <iostream>
 #include <string>
 using namespace std;
    void counter(){
  static int count =0;//static variable
   count++;
   cout<<"count :"<<count<<endl;
  }
 int main() {
   counter();
   counter();
   counter();
   return 0;
 }*/
// static variable in class

/*#include <iostream>
#include <string>
using namespace std;
 class example{
   public:
 static  int x ; //build static
 };
 //scope operator
   int example::x=0;
int main() {
   example eg1;
   example eg2;
   example eg3;

   cout<<eg1.x++<<endl;//0
   cout<<eg2.x++<<endl;//1
   cout<<eg3.x++<<endl;//2
   return 0;
}*/
// static objects
/*#include <iostream>
#include <string>
using namespace std;
 class example{
   public:
   example(){
       cout<<"constructer..\n";
   }
   ~example(){
       cout<<"destructor..\n";

   }
 };
int main() {
   int a=0;
   if(a==0){
       static example eg1;
   }
   cout << "code ending..\n";
   return 0;
}*/
// FRIEND CLASS & FUNCTION
/*#include <iostream>
#include <string>
using namespace std;
class a
{
    string secret = "secret data";
    friend class b;
     friend void revealsecret(a &obj);
};
class b
{ // becomes a friend class of a
public:
    void showsecret(a &obj)
    {
        cout << obj.secret << endl;
    }
};
void revealsecret(a &obj)
{
    cout << obj.secret << endl;
}
int main()
{
    a a1;
    b b1;

    b1.showsecret(a1);
    return 0;
}*/

// PRACTICE QUESTION
/*#include <iostream>
#include <string>
using namespace std;
class parent
{
public:
    parent()
    {
        cout << "constructor of parent\n";
    }
    ~parent()
    {
        cout << "destructor of parent\n";
    }
};

class child : public parent
{
public:
    child()
    {
        cout << "constructor  of child\n";
    }
    ~child()
    {
        cout << "destructor  of child\n";
    }
};
int main()
{
    child ch1;

    return 0;
}*/
// practice qs
#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    virtual void print()
    {
        cout << "base\n";
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "derived\n";
    }
};
int main()
{
    base *b = new derived();
    b->print();

    delete b;

    return 0;
}