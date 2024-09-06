#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    vector<int>price(n);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int cnt= 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if((price[i]+price[j]+price[k])%d == 0){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}