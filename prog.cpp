// int 
// char
// string
// bool
// double

// DRY - DONT REPEAT YOURSELF
#include <iostream>
using namespace std;

int main(){
    int num = 15;
    cout<< num;
    


    string fruits[4]  = {"apple" , "mango" ,"grapes" , "banana"};
    

    fruits[1] = "abcd";
    //for- loop
    for (int i = 0 ; i < 4 ; i++){
        cout<< fruits[i] <<"\n";
    }  

    for (int i = 3 ; i <= 0 ; i--){
        cout<< fruits[i] <<"\n";
    }  
    



    // for-each loop
    for(string fruit : fruits) {
        cout<< fruit <<"\n";
    }

    cout<<(sizeof(fruits)/ sizeof(string));

    


    string a [2][4] = {
        {"cfghd" , "hfvdj" , "hdj" , "hsng"},
        {"cfghd" , "hfvdj" , "hdj" , "hsng"}

    };
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout << a[i][j] <<"\n";
        }
    }

return 0;




}
