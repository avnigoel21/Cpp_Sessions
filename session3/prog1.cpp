#include<iostream>
using namespace std;

// transpose of a matrix
// matrix multiplication


// 2x3  multiply   3x2
// 2x2 

// n1 m1    multiply n2 m2
// n1 m2



int main(){
    
   int n1, m1;
   cin>>n1>>m1;

   int arr[n1][m1];

    for(int i = 0; i < n1 ; i++){
        for(int j = 0; j < m1 ; j++){
            cin>> arr[i][j];
        }
    }


   int n2, m2;
   cin>>n2>>m2;

   int arr2[n2][m2];

    for(int i = 0; i < n2 ; i++){
        for(int j = 0; j < m2 ; j++){
            cin>> arr2[i][j];
        }
    }

    int ans[n1][m2];
    for(int i = 0; i <n1 ; i++){
        for(int j = 0; j < m2; j++){
            ans[i][j] = 0;
        }
    }
    for(int i = 0; i < n1; i++){
        for(int j = 0 ; j < m2 ; j++){
            for(int k = 0; k < m1; k++){
                ans[i][j] += arr[i][k]  * arr2[k][j];
            }
        }
    }

    cout<<"Matrix is \n";
    for(int i = 0; i < n1 ; i++){
        for(int j = 0; j < m2 ; j++){
            cout<< ans[i][j]<<" ";
        }
        cout<<"\n";
    }
  
    return 0;
}