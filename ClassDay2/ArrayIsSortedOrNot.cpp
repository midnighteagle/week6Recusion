#include<iostream>
using namespace std;
void CheakArraySortedOrNot(int arr[], int size,int index, bool &IsSorted){
    // base Case
    if(index == size -1 ){
        return;
    }
    if(arr[index] > arr[index + 1]){
        IsSorted = false;
    }
    
    CheakArraySortedOrNot(arr, size, index + 1, IsSorted);
    
}
int main(){
    int arr[] ={10,20,30,40,45,50,35};
    int size = 7;
    int index = 0;
    bool IsSorted = true;
    CheakArraySortedOrNot(arr, size, index, IsSorted);
    if (IsSorted){
        cout<<"The Array is sorted"<<endl;
    }
    else{
        cout<<"The Array Is not Sorted"<<endl;
    }
    return 0;
}