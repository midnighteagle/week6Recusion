/*
45. Jump Game II
Medium
Topics
premium lock icon
Companies
You are given a 0-indexed array of integers nums of length n. You are initially positioned at index 0.

Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at index i, you can jump to any index (i + j) where:

0 <= j <= nums[i] and
i + j < n
Return the minimum number of jumps to reach index n - 1. The test cases are generated such that you can reach index n - 1.

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [2,3,0,1,4]
Output: 2
 

Constraints:

1 <= nums.length <= 104
0 <= nums[i] <= 1000
It's guaranteed that you can reach nums[n - 1].
*/
#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>& nums, int i, int &ans, int step){
    // base case
    if(i == nums.size() - 1) {
        ans = min(ans, step);
        return;
    }
    if(i >= nums.size()) return ;
    // stuck at that index;
    // if(nums[i] == 0) return ; 

    for(int jump = 1; jump <= nums[i];jump++){
        solve(nums, i + jump, ans, step + 1);
    }
    
}
int jump(vector<int>& nums) {
    int ans = INT_MAX;
    solve(nums,0, ans,0);
    return ans;
}

int main(){
    vector<int> nums = {2,3,1,1,4};
    int ans = jump(nums);
    cout<< "The Ans is: "<<ans<<endl;
    return 0;
}