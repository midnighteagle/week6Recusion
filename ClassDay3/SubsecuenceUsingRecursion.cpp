#include<iostream>
#include<vector>
using namespace std;
void printSubsecuence(string str, int index, string output, vector<string> &ans ){
    // base case
    if(index == str.length()){
        // cout<<output<<endl;
        ans.push_back(output);
        return;
    }
    // Ek main krunga 
    char ch = str[index];
        // include
        // output.push_back(ch);
        printSubsecuence(str, index + 1, output + ch, ans);
        // exclude
        printSubsecuence(str, index + 1, output, ans);
    
    // baki recursion khud kr lega
}
int main(){
    string str = "abc";
    string output = "";
    int index = 0;
    vector<string> ans;
    printSubsecuence(str, index, output,ans);
    cout<< ans.size()<<endl;
    for(auto i: ans){
        cout<< i << endl;
    }
    return 0;
}