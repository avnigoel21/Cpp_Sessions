#include<iostream>
using namespace std;

// transpose of a matrix
// matrix multiplication


// 2x3  multiply   3x2
// 2x2 

// n1 m1    multiply n2 m2
// n1 m2



int main(){
    
   int n, m;
   cin>>n>>m;

   int arr[n][m];

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cin>> arr[i][j];
        }
    }

    cout<<"Matrix is \n";
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    int x;
    cin>>x;

    bool flag = false;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(arr[i][j] == x){
                cout<<i<<","<<j<<"\n";
                flag = true;
            }
        }
    }

    if( flag == true){
        cout<<"Element found\n";
    }
    else{
        cout<<"not found\n";
    }




    return 0;
}