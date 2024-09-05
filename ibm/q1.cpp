// pwd protection
#include<bits/stdc++.h>

using namespace std;

int solve(string pwd){
    int ans=0;
    for(int i=0;i<pwd.size()-1;i+=2){
        if(pwd[i] != pwd[i+1]){
            ans++;
        }
    }
    return ans;
}
int main(){
    string str;
    cin>>str;
    cout<<solve(str)<<endl;
}