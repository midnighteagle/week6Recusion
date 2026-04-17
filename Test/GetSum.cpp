#include<iostream>
using namespace std;
int GetSum(int n){
    //baseSum
    if(n == 0 || n == 1){
        return n; 
    }
    // recursive call
    // sum(n) = sum(n-1) + n;
    int ans = GetSum(n-1)+n;
    
    // processing
    return ans;
}
int main(){
    int n;
    cout<< "Enter the number: ";
    cin>>n;
    cout<<GetSum(n);
    return 0;
}