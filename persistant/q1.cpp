#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    // Inputting the array and printing it for debugging
    cout << "Input Array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Sorting the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());
    
    // Printing the sorted array for debugging
    cout << "Sorted Array: ";
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;
    
    // Output the k-th largest element
    cout << "k-th largest element: " << arr[k-1] << endl;
}
