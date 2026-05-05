#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<< "enter the value of A: " <<endl;
    cin>> a;
    cout<< "enter the value of B: " <<endl;
    cin>> b;
    int c = a % b;
    cout<<" the modulus of "<<a<<"and "<<b<<" is equal to "<<c<<endl;

    return 0;
}