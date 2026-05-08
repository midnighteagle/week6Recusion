/*
416. Partition Equal Subset Sum
Medium
Topics
premium lock icon
Companies
Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.

 

Example 1:

Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].
Example 2:

Input: nums = [1,2,3,5]
Output: false
Explanation: The array cannot be partitioned into equal sum subsets.
 

Constraints:

1 <= nums.length <= 200
1 <= nums[i] <= 100

Todos:
1-> Sum all the elements
2-> cheak kro sum % 2 != 0 -> return false;
3-> Target = sum/2;
4-> find the subset with subsetSum = sum/2;
*/
#include<iostream>
using namespace std;
bool solve(vector<int>& nums, int target, int i){
    // base case!!
    // cheak the condition.
    if(target < 0 || i == nums.size()) return false;
    if(target == 0) return true;

    bool inc = solve(nums,target - nums[i],i+1);
    bool exc = solve(nums,target ,i+1);
    return inc || exc;


}
bool canPartition(vector<int>& nums) {
    // find the sum of all element by the help of accumulate function.
    int sum = accumulate(nums.begin(), nums.end(), 0);
    // it shows Odd Sum.
    if((sum % 2) != 0) return false;
    // sum is divuded by 2 using bitwise.
    int target = sum >> 1;
    return solve(num,target,0);

}
int main(){
    vector<int> nums = {1,5,11,5};
    bool ans = canPartition(nums);
    cout<< " the decision on 0 And 1: "<<ans<<endl;
    return 0;
}