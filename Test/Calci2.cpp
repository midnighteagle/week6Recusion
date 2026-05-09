#include<iostream>
using namespace std;
int main(){
    int a; int b;
    cout<<"Enter the first Number: "<<endl;
    cin>>a;
    cout<<"Enter the second Number: "<<endl;
    cin>> b;
    cout<< "If You want to divide a by b: Select A Or Select B :"<<endl;
    char selectA; 
    cin>>selectA;
    int c;
    if(selectA == 'A'|| selectA == 'a'){
        c =a/b;
    }
    if(selectA == 'B' || selectA == 'b'){
        c = b/a;
    }
    cout<< "Output is: "<<c<<endl;
    return 0;
}