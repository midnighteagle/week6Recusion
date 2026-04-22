#include<iostream>
using namespace std;
void FindOdd(int arr[], int size, int index){
    // base case
    if(index == size){
        return;
    }
    // processing 
    if((arr[index]) & 1){
        cout<< arr[index]<<", ";
    }
    // recursive call
    FindOdd(arr, size, index+1);
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int index = 0;
    FindOdd(arr, size, index);
    return 0;
}