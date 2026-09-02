/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxactivities(vector<int> start, vector<int> end)
{
    // sort on end time
    // A0 select
    cout << "selecting A0\n";
    int count = 1;
    int currendtime = end[0];

    for (int i = 1; i <= start.size(); i++)
    {
        if (start[i] >= currendtime)
        { // non over-lapping
            cout << "selecting A" << i << endl;
            count++;
            currendtime = end[i];
        }
    }
    return count;
}

  //bool com(int a, int b){
  //  return a < b;//true
  //}

   bool compare(pair<int,int> p1, pair<int, int> p2){
      return p1.second<p2.second;//ascending-end mere ko case:1 chahiye

      //return p1.second>p2.second;//descending-end case nhi chahiye
      //return p1.first<p2.first;//ascending-end case nhi chahiye
      //return p1.first>p2.first;//descending-end case nhi chahiye
   }
int main()
{
    // vector<int> start ={1,3,0,5,8,5};
    // vector<int>  end ={2,4,6,7,9,9};
    // cout<< maxactivities(start,end)<<endl;

    vector<int> start = { 0, 1,2};
    vector<int> end = {9, 2, 4};
    vector<pair<int, int >> activity(3, make_pair(0, 0));
    activity[0] = make_pair(0, 9);
    activity[1] = make_pair(1, 2);
    activity[2] = make_pair(2, 4);
    for (int i = 0; i < activity.size(); i++)
    {
        cout <<" A "<<i<<" :" <<activity[i].first << " ," << activity[i].second << endl;
    }

    sort(activity.begin(),activity.end(),compare);

    cout <<"----------sorted---------\n";

    for (int i = 0; i < activity.size(); i++)
    {
        cout <<" A "<<i<<" :" <<activity[i].first << " ," << activity[i].second << endl;
    }
    return 0;
}*/
// knapsack bori
/*#include <iostream>
#include <vector>
 #include <algorithm>

using namespace std;
bool compare(pair<double,int> p1,pair<double, int> p2){
   return p1.first > p2.first;//descending based on ratio
}
   int fractionalknapsack(vector<int> val, vector<int> wt,int w ){//t.c=o(nlogn)
       int n = val.size();
       vector<pair<double,int>>ratio(n,make_pair(0.0,0));//pair(ratio, idx)->(double,int)
       for(int i=0;i<n;i++){
           double r = val[i]/(double)wt[i];
           ratio[i]=make_pair(r,i);

       }
       sort(ratio.begin(),ratio.end(),compare);
       int ans = 0;
       for(int i=0;i<n;i++){
           int idx = ratio[i].second;//wt,val
           if(wt[idx]<= w){
               ans += val[idx];
               w -= wt[idx];
           } else {
               ans += ratio[i].first * w;
               w = 0;
               break;
           } 
       }
       cout << " max value = " << ans <<endl;
       return ans;
   }
int main() {
   vector<int> val = { 60, 100,120};
   vector<int> wt = {10, 20, 30};

   int w = 50;
   fractionalknapsack(val,wt,w);
   return 0;
}*/
// absolute minimum
/*#include <iostream>
 #include <vector>
 #include <algorithm>

using namespace std;

int main() {

   vector<int> A = { 4, 1,8,7};
   vector<int> B= {2, 3,6,5};

   sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int absdiff = 0;
    for(int i=0;i<A.size();i++){
       absdiff += abs(A[i] - B[i]);
    }
    cout << " min abs diff = "<< absdiff << endl;
   return 0;
}*/
// max length chain pair
/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> p1, pair<int, int> p2){
    return p1.second < p2.second; // ascending base
}

int maxchainlength(vector<pair<int,int>> pairs){
    int n = pairs.size();

    sort(pairs.begin(), pairs.end(), compare);

    int ans = 1;
    int currend = pairs[0].second;

    for(int i = 1; i < n; i++){
        if(pairs[i].first > currend){ // non overlapping
            ans++;
            currend = pairs[i].second;
        }
    }

    cout << "max chain length = " << ans << endl;
    return ans;
}

int main()
{
    int n=5;
    vector<pair<int, int>> pairs(n, make_pair(0, 0));
    pairs[0] = make_pair(5, 24);
    pairs[1] = make_pair(39, 60);
    pairs[2] = make_pair(5, 28);
    pairs[3] = make_pair(27, 40);
    pairs[4] = make_pair(50, 90); 

    maxchainlength(pairs);

    return 0;
} */
//indians coins
/*#include <iostream>
#include <vector>

using namespace std;
 int getminchange(vector<int> coins, int v){
    int ans = 0;
    int n = coins.size();
    for(int i=n-1; i>= 0 && v>0;i--){
       if(v >= coins [i]){
        ans += v/coins[i];
        v = v%coins[i];
       }
    }
    cout<< " min coins for change = " << ans << endl;
    return ans;
 }
int main() {
    vector<int> coins = {1,2,5,10,20,50,100,500,2000};
    int v = 590;
   getminchange(coins, v);
    return 0;
}*/
//job sequencing
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

   bool compare(pair<int,int> p1, pair<int, int> p2){
    return p1.second > p2.second; // descending base 
   }
    int maxprofit(vector<pair<int, int>> jobs){
         sort(jobs.begin(),jobs.end(),compare);
         //first -> deadline; second -> profit
         int profit = jobs[0].second;
         int safedeadline = 2;
         for(int i=1;i<jobs.size();i++){
            if(jobs[i].first >= safedeadline){
                profit += jobs[i].second;
                safedeadline++;
            }
         }
         cout<<" max profit from jobs : "<<profit <<endl;
         return profit;
    }

int main() {
     
    int n=4;
    vector<pair<int, int>> jobs(n, make_pair(0, 0));
    jobs[0] = make_pair(4, 20);
    jobs[1] = make_pair(1, 10);
    jobs[2] = make_pair(1, 40);
    jobs[3] = make_pair(1, 30);

    maxprofit(jobs);
    return 0;
}*/
//same qs with help   class---vector<object>
//job sequencing
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  class job{
    public:
    int idx;
    int deadline;
    int profit;
     
    job(int idx,int deadline, int profit){
        this->idx = idx;
        this->deadline =deadline;
        this->profit = profit;
    }
  };
   int maxprofit(vector<pair<int, int>> pairs){
    int n=pairs.size();
     vector<job> jobs;

       for(int i=0;i<n;i++){
        jobs.emplace_back(i,pairs[i].first,pairs[i].second);
        }
         sort(jobs.begin(),jobs.end(),[](job &a, job &b){
            return a.profit > b.profit;  
         });
         //first -> deadline; second -> profit
        cout<< "selecting job "<<jobs[0].idx<<endl;
         int profit = jobs[0].profit;
         int safedeadline = 2;
         for(int i=1;i<n;i++){
            if(jobs[i].deadline >= safedeadline){
                cout<< "selecting job "<<jobs[i].idx<<endl;
                profit += jobs[i].profit;
                safedeadline++;
            }
         }
         cout<<" max profit from jobs : "<<profit <<endl;
         return profit;
    }

int main() {
     
    int n=4;
    vector<pair<int, int>> jobs(n, make_pair(0, 0));
    jobs[0] = make_pair(4, 20);
    jobs[1] = make_pair(1, 10);
    jobs[2] = make_pair(1, 40);
    jobs[3] = make_pair(1, 30);

    maxprofit(jobs);
    return 0;
}
