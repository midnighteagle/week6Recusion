#include<iostream>
using namespace std;
bool SearchElement(int arr[],int index, int size, int target){
    // baseCase
    // 2 BaseCase can made -> found/ notFound
    // notFound
    if(index == size){
        // Invalid Index out of Bound.
        return false;
    }
    if(arr[index] == target){
        return true;
    }
    // Recursive Call relation
    bool Ans = SearchElement(arr,index + 1, size, target);
    // processing
    return Ans;
}
int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int target = 40;
    int index = 0;
    bool ans =SearchElement(arr, size, target, index);
    if(ans){
        cout<<"TargetFound: "<<ans<<endl;
    }
    else{
        cout<<"Target Not Found"<<endl;
    }
    return 0;
}