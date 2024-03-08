#include<iostream>
using namespace std;



int main(){
    
    // char arr[100] = "apple";
    // int i = 0;

    // while(arr[i] != '\0'){
    //     cout<<arr[i]<<endl;
    //     i++;
    // }

    int n;
    cin >> n;

    char A[n + 1];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    //A[n] = '\0';

    // for (int i = 0, j = n - 1; j >= i; i++, j--) {
    //     if (A[i] != A[j]) {
    //         c = false;
    //         break; 
    //     }
    // }

    bool c = true;
    for(int i = 0; i < n ; i++){
        if(A[i] != A[n-1-i])
        {
           c = false;
           break; 
        }   
    }

    if (c) {
        cout << "Palindrome";
    } else {
        cout << "Not a palindrome";
    }




    // task: find the largest word in a sequence
    // eg : do or die
    // ans : maxLen = 3
    //       maxLenWord = die
 





    return 0;
}