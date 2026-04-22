#include<iostream>
using namespace std;
// int FindTarget1(int arr[], int size, int target){
//     int start = 0;
//     int end = size - 1;
//     while(start <= end){
//         int mid = start + (end - start) / 2;
//         if(arr[mid] == target){
//             return mid;
//         }
//         else if(arr[mid] < target ){
//             // right me jaao
//             start = mid + 1;
//         }
//         else{
//             // left me 
//             end = mid - 1;
//         }
//     }
//     return -1;

// }
int FindTarget(int arr[], int size, int start,int end,int target ){
    // base case
    if(start > end){
        return -1;
    }
    // processing
    int mid = start + (end - start) / 2;
    if(arr[mid] == target){
        return mid;
    }
    // processing and recursive call 
    if(arr[mid] < target){
        // right me jaao 
        return FindTarget(arr,  size,mid + 1, end, target);
    }
    else{
        // left me jaao
        return FindTarget(arr,  size, start,mid - 1, target);
    }
}
int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int start = 0;
    int end = size - 1;
    int target = 30;
    int ans = FindTarget (arr, size, start, end, target);

    cout<< ans<<endl;
    return 0;
}