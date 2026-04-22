#include<iostream>
using namespace std;
void printCounting(int n ){
    // base case 
    if(n == 0){
        return;
    }
    // recursive call (head recursive)
    printCounting(n-1);
    // processing
    cout<< n <<" ";
}
int main(){
    printCounting(6);
    return 0;
}