#include<bits/stdc++.h>
using namespace std;
vector<string> solve(vector<string>&st,int n){
    vector<string> result;
  for(auto it: st){
    stringstream ss(it);
    int a, b, c;
     ss>>a>>b>>c;
  
    if((a+b < c) || (b+c < a) || (c+a < b)){
           cout<<a<<b<<c<<endl;
        result.push_back("Invalid");
        continue;
    }
    if(a==b && b == c){
        result.push_back("Equilateral");
    }else if((a ==b )|| (b ==c)||(a == c)){
        result.push_back("Isoceles");
    }else{
        result.push_back("Not one of these");
    }
  }
  return result;


}

int main(){
    int n;
    cin>>n;
    vector<string> st(n);
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,st[i]);
    }
    vector<string> result = solve(st,n);
    for(auto it : result){
        cout<<it<<" ";
    }
}