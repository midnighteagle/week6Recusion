#include<iostream>
using namespace std;
int fact(int n){
    if(n == 1){
        return 1;
    }
    return n * fact(n - 1);
}
int main(){
    int n;
    int ans = fact(n);
    cout<< "The factorial of number "<<ans<<endl; 
    return 0;
}