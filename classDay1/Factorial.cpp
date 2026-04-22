#include<iostream>
using namespace std;
int getFactorial(int n){
    // base Case -> mendatory
    if(n == 0 || n == 1){
        return 1;
    }

    // Recusive call -> mendatory
    // fact(n) = n * fact(n-1);
    //bigProbelem = fact(n);
    // small problem = fact(n-1);
    int recusionKaAns = getFactorial(n - 1); // head recursion
    int finalAns = n * recusionKaAns;

    // processing part
    return finalAns;
}
int main(){
    int n;
    cout<<"Enter the number to get the factorial: ";
    cin>>n;
    int ans = getFactorial(n);
    cout<<"Factorial of "<<n<< " is: "<<ans<<endl;
    return 0;
}