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




int main(){

    int n, p;
    cin>> n>>p;
    //cout<< Sum (n)<<endl;
    cout << power(n,p);
    return 0;
}

// check if the array is sorted or not
// strictly increasing

// {1 ,2 ,3, 4, 5, 6, 7}

// arr[0] < arr [1]  and arr(1...n) is sorted