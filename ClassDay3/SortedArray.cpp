#include<iostream>
using namespace std;
bool cheakSorted(int arr[], int size, int index){
    // base case
    if(index == size - 1){
        return true; // single element array is treated as sorted array.
    }

    bool CurrAns = false;
    bool recusionAns = false;
    // 1 main solve krunga 
    if(arr[index + 1] > arr[index]){
        CurrAns = true;
    }
    // baki recursion kr dega
    recusionAns = cheakSorted(arr, size, index+1);
    // return CurrAns && recusionAns;
    if(recusionAns ==true && CurrAns == true){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int arr[] = {10,20,30,40,50};
    int size = 4;
    int index = 0;
    bool ans = cheakSorted(arr, size, index);
    cout<<"Array is sorted or not: "<< ans<<endl;
    return 0;
}