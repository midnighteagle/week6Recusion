#include<iostream>
using namespace std;
void printArray(int arr[], int size, int index){
    // base case
    if(index == size){
        // array se bhar nikal jaao
        return;
    }
    // recursive Call Relation
    // 1. ek case main solve krunga.
    cout<< arr[index]<<" ";
    // 2. baki Recursion sambhal lega
    printArray(arr, size, index + 1);
    // processing
}
int main(){
    int arr[] ={10,20,30,40,50,60};
    int size = 6;
    int index = 0;
    printArray(arr,size,index);
    return 0;
}