#include<bits/stdc++.h>
using namespace std;

int solve(string &word){
    map<char,int> mp;
    for(auto it : word){
        mp[it]++;
    }
    int ans=0;
    for(auto it : mp){
        ans+=(it.second)/2;
    }
    return ans;
}
int main(){
    string str;
    cin>>str;
    cout<<solve(str)<<endl;
}