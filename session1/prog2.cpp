// selection sort

// 12 45 23 51 19 8

// 8 45 23 51 19 12
// 8 12 23 51 19 45

// insertion sort
// 12 45 23 51 19 8
// 12 45 23 51 19 8
// 12 23 45 51 19 8
// 12 23 45 51 19 8
// 12 19 23 45 51 8
// 8 12 19 23 45 51


#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n ; i++){
        cin>> arr[i];
    }

    // for(int i = 0;i<n - 1;i++) {
    //     for(int j = 0;j<n - i - 1 ;j++) {
    //        if(arr[j] > arr[j + 1]) {
    //         int temp = arr[j];
    //         arr[j] = arr[j+1];
    //         arr[j+1] = temp;
    //        }
    //     }
    // }

    // insertion sort
    for(int i = 1; i < n ; i++){
        int current = arr[i];
        int j = i-1;
        while (arr[j]> current && j>=0){
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = current;
    }


    for(int i = 0; i < n ; i++){
        cout<<arr[i]<< " ";
    }

// max till i
//  0 1 2 3 4 5
//  1 0 5 4 6 8
//  1 1 5 5 6 8 

// O(n)

   
    

}