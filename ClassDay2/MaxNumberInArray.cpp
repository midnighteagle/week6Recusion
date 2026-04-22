#include<iostream>
using namespace std;
// int MaxInArray(int arr[], int size, int index,int &maxi){
//     int max = INT_MIN;
//     // base case
//     if(index == size){
//         return -1;
//     }
//     // recursive call
//     // -> ek main krunga 
//     if(max<arr[index]){
//         return arr[index];
//     }
//     // -> baki recursion sambhal lega.
//     MaxInArray(arr, size, index + 1);



// }
void MaxInArray(int arr[], int size, int index, int &maxi){
    
    // base case
    if(index == size){
        return;
    }
    // recursive call
    // -> ek main krunga (processing)
    maxi = max(maxi, arr[index]);
    
    // -> baki recursion sambhal lega.
    MaxInArray(arr, size, index + 1, maxi);



}

int main(){
    int arr[] ={10,20,30,40,50};
    int size = 5;
    int index = 0;
    int maxi = INT_MIN;
    MaxInArray(arr,size,index, maxi);
    cout<< " the max number in Array: " << maxi << endl;
    return 0;
}