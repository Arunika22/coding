//counter value for each element in array

#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&arr,int n){
    vector<int> res;
    for(int i=0;i<n;i++){
        int counter=0;
        for(int j=0;j<i;j++){
            if(arr[j] > arr[i]){
                counter-=abs(arr[j]-arr[i]);
            }else{
                counter+=abs(arr[j]-arr[i]);
            }
        }
        res.push_back(counter);
    }

    return res;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans=solve(arr,n);
    for(auto it : ans){
        cout<<it<<" ";
    }
}