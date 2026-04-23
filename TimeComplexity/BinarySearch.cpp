#include<iostream>
using namespace std;
int bs(int arr[], int size, int start, int end, int target){
    if(start > end){
        return -1;
    }
    int mid = start + (end - start) / 2;
    if(arr[mid] == target) return mid;
    else if(target > arr[mid]){
        return bs(arr, size, mid+1, end, target);
    }
    else{
        return bs(arr, size, start, mid - 1, target);
    }
}
int main(){
    int arr[] ={10,20,30,40,50,60};
    int size = 6;
    int start = 0;
    int end = size - 1;
    int target = 40;
    int ans = bs(arr, size, start, end, target);
    cout<< "The index of the target "<<ans <<endl;
    return 0;
}