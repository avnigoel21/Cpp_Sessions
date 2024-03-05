// max till i
//  0 1 2 3 4 5
//  1 0 5 4 6 8
//  1 1 5 5 6 8 

// O(n) + O(n) = 2 O(n)

#include<iostream>
using namespace std;

int main(){
    int m = -99999;
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n ; i++){
        cin>> arr[i];
    }

    for(int i = 0; i < n ; i++){
        m = max(m, arr[i]);
        cout<<m<< " ";
    }
    return 0;
}