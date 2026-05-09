#include<iostream>
using namespace std;
bool cheakPalindrome(string &str, int start, int end){
    // base case 
    if(start >= end){
        return true;
    }
    // processing
    if(str[start] != str[end]){
        return false;
    }
    // Recursive call
    return cheakPalindrome(str, start + 1, end - 1);
    


}

int main(){
    string str = "RACECAR";
    int start = 0;
    int end = str.size()-1;
    bool ans = cheakPalindrome(str, start, end);
    if(ans){
        cout<< str<< " is a palindrome"<<endl;
    }
    else{
        cout<< str<<" is not a palindrome";
    }
    
    return 0;
}