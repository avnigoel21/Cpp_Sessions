// searching
// 1) linear search

// {12, 18, 20, 42, 8, 10}
// key = 120

// {8, 10, 12, 21, 27, 34, 42}
// key = 27

#include<iostream>
using namespace std;

int linearSearch(int arr[], int n , int key){
    for(int i = 0; i <n ; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;

}

int binarySearch(int arr[], int n , int key){
    int s = 0;
    int e = n;

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
    

}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n ; i++){
        cin>> arr[i];
    }

    int key;
    cin>>key;

    //cout<<linearSearch(arr, n , key)<<endl;
    cout<<binarySearch(arr, n , key)<<endl;


}