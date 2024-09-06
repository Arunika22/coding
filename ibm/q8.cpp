#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<string> st(n);
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,st[i]);
    }
    vector<string> result;
    unordered_map<string,int> mp;
    for(int i = n-1;i>=0;i--){
        if(k == 0){
            break;
        }
        if(mp.find(st[i])!=mp.end()){
            continue;
        }else{
            cout<<st[i]<<" ";
            k--;
            mp[st[i]]++;
        }

    }
   
    
}