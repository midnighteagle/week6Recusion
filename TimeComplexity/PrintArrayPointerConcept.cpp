#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){
    if(size==0){
        return;
    }
    cout<<*arr<<endl;
    PrintArray(arr+1, size - 1);
}
int main(){
    int arr[] ={10,20,30,40};
    int size = 4;
    PrintArray(arr, size);
}