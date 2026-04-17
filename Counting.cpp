#include<iostream>
using namespace std;
void PrintCounting(int n){
    // base case
    if(n == 0){
        return;
    }
    // processing case
    cout<< n << " ";
    // recursive case // tail recusion 
    PrintCounting(n-1);

}
int main(){
    PrintCounting(5);
    return 0;
}