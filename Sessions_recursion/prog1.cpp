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




int main(){

    int n;
    cin>> n;
    //cout<< Sum (n)<<endl;
    //cout << power(n,p);

    dec(n);
    inc(n);
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


// find the first and last occurence of a number in an array
// arr = {4, 2, 1, 2, 3, 2, 6}  , key = 2