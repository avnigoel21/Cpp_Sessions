#include<iostream>
#include<string>
#include <algorithm>

using namespace std;


string reverseWords(string s1){
    string ans;
    int len = s1.length();
    int a;

    for(int i = len-1 ; i>=0 ; i--){
        if(s1[i] == ' '){
            a = len - i;
            len = i - 1;
            ans.append(s1.substr(i+1 , a));
            ans.append(" ");
        }
    }
    ans.append(s1.substr(0, len+1));
    return ans;
}

int main(){

    //string str;
    // cin>>str;
    // getline(cin, str);


//     string s1 = "fam";
//     string s2 = "ily";

// // 1+2 = 3
// // "1"+"2" = 12
//     cout<<s1+s2<<endl;
//     s1.append(s2);
//     cout <<s1<<endl;


//     cout<<s1[3];


    // string str = "fcvbgsjkl";
    // str.clear();

    // cout<<str;

    // string s1 = "abc";
    // string s2 = "8xyz";

    // if(s1.compare(s2)){
    //     cout<< "string are equal";
    // }

   // string s1 = "445637";

   // sort(s1.begin(), s1.end())  // sort in ascending order
    // sort(s1.begin(), s1.end(), greater<int>()); // sort in descending order


    // cout<<s1<<endl;

    //convert into upper case & lower to upper case
    // string s1 = "abcdefabcdefaa";

    // cout << 'a' - 'A' <<endl;


    //find the maxium occuring character and its frequency
    // string s1 = "abcdefabcdefaa";

    // int freq[26];

    // for(int i = 0 ; i < 26 ; i++){
    //     freq[i] = 0;
    // }

    // for(int i = 0; i <s1.length(); i++){
    //     freq[s1[i] - 'a']++;
    // }

    // char ans = s1[0];
    // int maxF = 0;

    // for(int i = 0 ; i < 26 ; i++){
    //     if(freq[i] > maxF){
    //         maxF  = freq[i];
    //         ans = i+ 'a';
    //     }
    // }
    // cout<< maxF << " " << ans << endl;

    // reverse words in a given string
    //         0123456789
    // // s = "i like the"

    // len = 9
 
    // word = "the"  // len - i
    // ans= " "

    
    // "program very much'

    // ans = "much very program this like i" 


    string s = "i like this program very much";


    string reverse = reverseWords(s);

    cout<<reverse<<endl;


//  int freq[26] = {0};
    
    return 0;

    // remove duplicates from a strings
    // "abBcddeFfgHghiBJA"

// #include <unordered_set>







}
