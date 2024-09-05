//Maximise earnings (Job sequencing problem)

#include<bits/stdc++.h>

using namespace std;

class Job{
   public :
      int st,en,cost;
};
//if time is in string format

int getTime(string s){
   // 0935
   int hr = (s[0]-'0')*10+(s[1]-'0');
   int min = (s[2]-'0')*10+(s[3]-'0');
   return hr*60+min;
}
bool compare(Job a,Job b){
   return a.cost > b.cost;
}

pair<int,int> func(Job arr[],int n){
   sort(arr,arr+n,compare);
   int maxi = arr[0].en;
   for(int i=0;i<n;i++){
      maxi= max(maxi,arr[i].en);
   }
   int slot[maxi+1];
   for(int i=0;i<=maxi;i++){
      slot[i] =-1;
   }
   int count =0,profit =0;
   for(int i=0;i<n;i++){
      for(int j = arr[i].en;j>=1;j--){
         if(slot[j] == -1){
            slot[j] = i;
            profit+=arr[i].cost;
            count++;
            break;
         }
      }
   }
   return {count,profit};
}
int main(){
   int n;
   cin>>n;
   Job arr[n];
   string st,en;
   int cost;
   for(int i=0;i<n;i++){
      cin>>st>>en>>cost;
      arr[i].st = getTime(st);
      arr[i].en = getTime(en);
      arr[i].cost = cost;
   }
 
   pair<int,int> ans = func(arr,n);
   cout<<"No of jobs: "<<ans.first<<endl;
   cout<<"Total profit : "<<ans.second<<endl;
}