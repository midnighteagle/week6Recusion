#include<iostream>
using namespace std;
void MaxInArray1(int arr[], int size, int index, int &mini){
    
    // base case
    if(index == size){
        return;
    }
    // recursive call
    // -> ek main krunga (processing)
    mini = min(mini, arr[index]);
    
    // -> baki recursion sambhal lega.
    MaxInArray1(arr, size, index + 1, mini);
}
int main(){
    int arr[] ={10,20,30,40,50};
    int size = 5;
    int index = 0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    MaxInArray1(arr,size,index, mini);
    cout<< " the min number in Array: " << mini << endl;

    return 0;
}