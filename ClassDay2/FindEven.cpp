#include<iostream>
using namespace std;


void FindEven(int arr[], int index, int size){
    // base case 
    if(index == size){
        return;
    }

    // processing
    if(!(arr[index] & 1)){ // to Find Even.
        cout << arr[index] << " ";
    }

    // recursive call 
    FindEven(arr, index + 1, size);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int index = 0;

    FindEven(arr, index, size);

    return 0;
}