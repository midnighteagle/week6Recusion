#include<iostream>
using namespace std;
int power(int n ){
    // basecase
    if(n == 0){
        return 1;
    }
    // else if(n == 1){
    //     return 2;
    // }
    // recursive case
    int recursiveAns = power(n-1);
    int finalAns = 2 * recursiveAns;
    // processing
    return finalAns;
}
int main(){
    int n;
    cout<< "Enter the value of n: ";
    cin>>n;
    int ans = power(n);
    cout<<"the power of"<<n<<" is: "<<ans<<endl;
    return 0;
}