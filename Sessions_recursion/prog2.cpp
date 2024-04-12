#include <iostream>
using namespace std;

int Sum(int n){
    if (n == 0){
        return 0;
    }
   // int prevSum = Sum(n-1);

    return n + Sum(n-1); 

}

int sumIterative(int n){
    int sum = 0;
    for(int i = 1; i <= n ; i++){
        sum += i;
    }
    return sum;
}

int power(int n, int p){
    if (p == 0){
        return 1;
    }

    int prevPower = power(n, p-1);
    return n * prevPower;
}
// n = 4
void dec(int n){
    if (n==1){
        cout <<"1" <<endl;
        return;
    }

    cout<<n<<endl;
    dec(n-1);

}
// n = 4   -> 3 -> 2 -> 1 ->   print 1234
void inc(int n){
    if (n==1){
        cout <<"1" <<endl;
        return;
    }

    inc(n-1);
    cout<<n<<endl;
    

}

// {1, 2, 3, 4}

int firstOccur(int arr[] , int n , int key, int i){
    if(i == n){
        return -1;
    }
    
    if(arr[i] == key){
        return i;
    }
    
    return firstOccur(arr, n, key, i+1);
}

int lastOccur(int arr[] , int n , int key, int i){
    if(i == n){
        return -1;
    }
    
    // {1, 2, 3, 4}
   int restArrayAns = lastOccur(arr, n, key, i+1);

   if(restArrayAns!= -1){
        return restArrayAns;
   }
    
    if(arr[i] == key){
        return i;
    }
    
    return -1;
}


void reverseStr(string s){
    if(s.length() == 0){
        return;
    }
    // ros - rest of the string
    string ros = s.substr(1);
    reverseStr(ros);
    cout<<s[0];
}


void subStr (string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }
    

    char ch = s[0];

    string ros = s.substr(1);

    subStr(ros, ans);
    subStr(ros, ans+ch);

}


int main(){

    // int n;
    // cin>> n;
    
    // int arr [] = {1, 2, 3, 4, 2, 5};
    
    // cout<<firstOccur(arr, 6, 2, 0)<<endl;
    // cout<<lastOccur(arr, 6, 2, 0)<<endl;
    //cout<< Sum (n)<<endl;
    //cout << power(n,p);


    subStr("ABC" , "");
    

    // reverseStr("world")

    // dec(n);
    // inc(n);
    return 0;
}

// check if the array is sorted or not
// strictly increasing

// {1 ,2 ,3, 4, 5, 6, 7}

// arr[0] < arr [1]  and arr(1...n) is sorted

// Print numbers till n
// 1) decreasing order
// 2) increasing order

// n = 5 -> 54321 , 12345


// first occ, last occur


// reverse a string using recursion


// replace pi with 3.14 in string

// "pippxxpiixipi"

// "3.14ppxx3.14ixi3.14"

