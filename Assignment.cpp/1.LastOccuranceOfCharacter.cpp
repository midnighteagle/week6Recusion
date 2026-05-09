#include<iostream>
using namespace std;
// todos:
// 1. create a function of the lastOccuranceChar in which parameters are
// pass the str by the refrence and ans also pass with the refrence
// 2. create the base case
// 3. check krenge ki yadi s[i] agar == target hai ans me store kr denge index ko
// 4. phir recursve call krenge lekin index -1 
// 5. agar s[i] == target to ans ko update kr denge 
void lastOccuranceRTL(string &str, int target, int index, int &ans){
    // base case
    if(index < 0){
        return;
    }
    // processing
    if(str[index] == target){
        ans = index;
        return;
    }
    // Recursive call
    lastOccuranceRTL(str, target, index - 1, ans);
}




// todos:
// 1. create a function of the lastOccuranceChar in which parameters are
// pass the str by the refrence and ans also pass with the refrence
// 2. create the base case
// 3. check krenge ki yadi s[i] agar == target hai ans me store kr denge index ko
// 4. phir recursve call krenge 
// 5. agar s[i] == target to ans ko update kr denge 

void lastOccuranceLTR(string &str, int target, int index, int &ans){
    // base case
    if(index >= str.size()){
        return;
    }
    // processing
    if(str[index] == target){
        ans = index;
    }
    // recursive call.
    lastOccuranceLTR(str, target, index + 1, ans);

} 
int main(){
    string str = "abcdefdegd";
    char target = 'd';
    int index = str.size()-1;
    int ans = -1;
    lastOccuranceRTL(str, target, index, ans);
    cout<< "last Occuance of "<<target<<" is: "<<ans<<endl;
    return 0;
}