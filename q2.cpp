//Minimum street lights

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int minTaps(int n, vector<int>& ranges) {
        vector<int>v(n+1,0);
        for(int i=0;i<ranges.size();i++){
            int l = max(0,i-ranges[i]);
            int r = min(n,i+ranges[i]);
            v[l] = max(v[l],r);
        }
        int taps =0;
        int currend =0;
        int maxend=0;
        for(int i=0;i<=n;i++){
            if(i > maxend){
                return -1;
            }
            if(i > currend){
                taps++;
                currend = maxend;
            }
            maxend = max(maxend,v[i]);
        }
        return taps;

}
int main(){
    int n;
    cin>>n;
    vector<int>ranges(n);
    for(int i=0;i<n;i++){
        cin>>ranges[i];
    }
    cout<<minTaps(n,ranges)<<endl;

}
