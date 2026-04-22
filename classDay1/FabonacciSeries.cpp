#include<iostream>
using namespace std;
int fib(int n){
    // base case
    if(n == 0 || n == 1){
        return n;
    }
    // recusive call
    int ans = fib(n-1) + fib(n-2);
    // processing
    return ans;
}
int main(){
    int n;
    cout<< "Enter the value of N: "<<endl;
    cin>> n;
    cout<< fib(n);
    return 0;
}