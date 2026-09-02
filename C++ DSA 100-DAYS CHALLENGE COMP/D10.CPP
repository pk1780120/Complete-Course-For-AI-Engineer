/*#include <iostream>
#include <string>
using namespace std;
   int tillingproblem(int n){//2*n
    if(n==0 || n==1){
        return 1;
    }
    //vertical
    int ans1 = tillingproblem(n-1);
    //hprizontal
    int ans2 = tillingproblem(n-2);//2*n-2
    return ans1 + ans2;
   }

int main() {
    int n=3;
    cout<<tillingproblem(2)<<endl;
    return 0;
}*/
// remove dublicate
/*#include <iostream>
#include <string>
using namespace std;
 void removeduplicates(string str,string ans,int i,int map[26]){
  if(i==str.size()){
   cout<<"ans :"<<ans<<endl;
   return;
  }
  int mapidx = (int)(str[i] - 'a');//type casting
  if(map[mapidx]){//dublicate
      removeduplicates(str,ans,i+1,map);
  }else{//not dublicate
      map[mapidx] = true;
      removeduplicates(str,ans+str[i],i+1,map);
  }
 }
int main() {
  string str = "appnnacollege";
  string ans = " ";
  int map[26] ={false};

  removeduplicates(str,ans,0,map);
  return 0;
}*/
// friends pairing problem
/*#include <iostream>
  #include <string>

using namespace std;
 int friendpairing(int n){
  if(n==1 || n==2){
      return n;
  }
  return friendpairing(n-1) + (n-1) * friendpairing(n-2);
 }
int main() {
  cout<<friendpairing(3)<<endl;
  return 0;
}*/
// binary string problem
#include <iostream>
#include <string>

using namespace std;
void binstring(int n, int lastplace, string ans)
{
    if (n == 0)
    {
        cout<<ans<<endl;
        return;
    }
    if (lastplace != 1)
    {
        binstring(n - 1, 0, ans + '0');
        binstring(n - 1, 1, ans + '1');
    }
    else
    {
        binstring(n - 1, 0, ans + '0');
    }
}
int main()
{
    string ans =" ";
  binstring(3,0,ans);
    return 0;
}