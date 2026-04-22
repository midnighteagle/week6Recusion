#include<iostream>
using namespace std;
void printDigit(int n){
    // base case
    if(n == 0){
        return;
    }
    // Recursive call 
    int NewNumber = n / 10;
    printDigit(NewNumber);
    // processing case 
    int b = n % 10;
    cout<< b <<" ";

}

int main(){
    int n = 389;
    // while(n>0){
    //     int b = n % 10;
    //     cout<< b << ",";
    //     n = n/10;
    // }
    printDigit(n);
    return 0;
}