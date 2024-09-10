//Given product prices and the sold prices compare both
/*
Sample testcase
products =["eggs","milk","cheese"]
productprices=[2.89,3.29,5.79]
productsold =["eggs","eggs","cheese","milk"]
soldprice = [2.88,2.99,5.97,3.29]
o/p=>2(eggs,cheese)
*/
#include<bits/stdc++.h>
using namespace std;
int func(vector<string>&products ,vector<float>&productprices,vector<string>&productSold,
vector<float>&soldprice){
    map<string,float> mp;
    int n = products.size();
    for(int i=0;i<n;i++){
        mp[products[i]] = productprices[i];
    }
    int count = 0;
    for(int i=0;i<productSold.size();i++){
        if(mp[productSold[i]] != soldprice[i]){
            count++;
        }
    }
    return count;
}
int main(){
    vector<string> products ={"eggs","milk","cheese"};
    vector<float> productprices={2.89,3.29,5.79};
    vector<string> productSold ={"eggs","eggs","cheese","milk"};
    vector<float>soldprice = {2.89,2.99,5.97,3.29};
    int ans = func(products,productprices,productSold,soldprice);
    cout<<ans<<endl;
}