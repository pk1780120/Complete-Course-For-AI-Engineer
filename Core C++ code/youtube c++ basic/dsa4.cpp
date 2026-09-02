//#include <iostream>

//using namespace std;
 
//int main() {
   // int n=4;
//code1 star square pattern
   /* for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            cout << "*";
        }
        cout << endl;
    }*/

    //code2 square character pattern
   /*for(int i=0; i<n; i++){
    char ch='A';
       for(int j=0; j<n; j++){
       cout<< ch;
       ch =ch+1;
       }
     cout<<endl;
    }*/

   //code3changing number square pattern
   /* int num =1;
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            cout <<num <<" ";
            num++;
        }
        cout<<endl;
    }*/

    //code4 character version
    /*char ch ='A';

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
       cout<< ch;
       ch =ch+1;
       }
     cout<<endl;
    }
  cout<< "after pattern:"<<ch<<endl;*/

   //code 5 traingle pattern

    /*for(int i=0; i<n; i++){
        for(int j=0;j<i+1; j++){
            cout << "*";
        }
        cout << endl;
    }*/

   // code-6 number pattern
   /*for(int i=0; i<n; i++){
        for(int j=0;j<i+1; j++){
            cout << (i+1);
        }
        cout << endl;
    }*/

    //code7 character pattern
   /*char ch ='A';
    for(int i=0; i<n; i++){
        for(int j=0;j<i+1; j++){
            cout << ch <<" ";
        }
        cout << endl;
        ch = ch +1;
    }*/

   // CODE8 NUMBER forward loop traingle pattern

   /*for(int i=0; i<n; i++){
        for(int j=1;j<=i+1; j++){
            cout << (j);
        }
        cout << endl;
     }*/
  
    //CODE9 NUMBER reverce loop traingle pattern
    
    /*for(int i=0; i<n; i++){
        for(int j=i+1;j>0; j--){
            cout << (j);
        }
        cout << endl;
    }*/

    //reverce character pattern
    /*for(int i=0; i<n; i++){
        for(int j=i+1;j>0; j--){
            cout << (j);
        }
        cout << endl;
    }*/

    //floyd's traiangle pattern 
   /* int num= 1;
    for(int i=0; i<n; i++){
        for(int j=i+1;j>0; j--){//backward =>i+1
            cout << (num);
            num++;
        }
        cout << endl;
    }*/

    //code 10 character pattern
   /*char ch ='A';
    for(int i=0; i<n; i++){
        for(int j=i+1;j>0; j--){
            cout << ch;
            ch =ch+1;
        }
        cout << endl;
       
    }*/

   // code 12 inverted  traiangle 

 /* int num= 1;
    for(int i=0; i<n; i++){
        //spaces
        for (int j=0; j<i; j++){
            cout << " ";
        }
        //nums
        for(int j=0; j<n-i; j++){
            cout<< i+1;
        }

     cout << endl;
    }*/

     //code-14 character pattern
      /*char ch = 'A';
    for(int i=0; i<n; i++){
        //spaces
        for (int j=0; j<i; j++){
            cout <<" ";
        }
        //char
        for(int j=0; j<n-i; j++){
            cout<< ch;
       }
           cout << endl;
           ch= ch+1;
    }*/

  //pyramid pattern
   /* for(int i=0; i<n; i++){
        //spaces:n-i-1
        for (int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //nums 1:i+1
        for(int j=1; j<=i+1; j++){
            cout<< j;
        }
        //backward loop num 2
        for(int j=i;j>=1;j--){ //or j>0
            cout<< j;

        }
        cout << endl;
    }*/

   //hollow daimond shape
   //toppart
   
   /*for(int i=0; i<n; i++){
        //spaces1:n-i1
        for (int j=0; j<n-i-1; j++){
            cout << " ";
    }
        cout<< "*";
        
        //spaces 2
        if(i!=0){
        for(int j=0; j<2*i-1; j++){
            cout<< " ";
        }
       cout<< "*";
    }
       cout<<endl;
 }

     //bottom loop num 2
    for( int i=0;i<n-1;i++){
       // spaces
        for(int j=0;j>i+1;j++){ 
            cout<< " ";
        }
      cout<< "*";
        //spaces
       if(i!=n-2){
       for( int j=0;j<2*(n-i)-5;j++){
         cout<< " ";
       }
       cout<< "*";
       }
     cout<< endl;
 }*/
    
    
   // return 0;
    //  }


#include <iostream>
using namespace std;

int main() {
    int arr[2];   // array for roll numbers
    int n = 2;    // total number of elements

    // Input roll numbers from user
    cout << "Enter " <<n<< " marks numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output roll numbers
    cout << "All marks Numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
