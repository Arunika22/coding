// n = 4   n = 3
/* 
 1234 | 123
 1234 | 123
 1234 | 123
 1234 | 123
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n " ;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
