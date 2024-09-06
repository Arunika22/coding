#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            arr[i]-=3;
        }else{
            arr[i]+=3;
        }
    }
    for(auto it : arr){
        cout<<it<<" ";
    }
}