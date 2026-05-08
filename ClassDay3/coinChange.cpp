/*
322. Coin Change
Medium
Topics
premium lock icon
Companies
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

 

Example 1:

Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
Example 2:

Input: coins = [2], amount = 3
Output: -1
Example 3:

Input: coins = [1], amount = 0
Output: 0
 

Constraints:

1 <= coins.length <= 12
1 <= coins[i] <= 231 - 1
0 <= amount <= 104

Algorithm
todos:
first create a function of name solve 
take parameter inside a function in which vector of int by the refrence of coins and
int datatype with amount variable

base case cheak krenge ki agar amount == 0 then return 0;


Agar amount < 0 hai int variable name MincoinAns = INT_MAX


*/

#include<iostream>
using namespace std;
int solve(vector<int>& coins, int amount) {
    // base Case
    if(amount == 0){
        // zero amount create krne ke liye coins lagenge hi nhi
        return 0;
    }
    // if amount < 0
    int MinCoinAns = INT_MAX;
    // har amount k liye poore coin k array ko traverse krna hai.
    for(int i = 0; i < coins.size(); i++){
        // int amt = amount;
        int coin = coins[i];
        // if coin value > amount value, No need to call recursive function

        // if coin value <= amount value , need to call recursive function.
        if(coin <= amount){
            // 1 coin toh use ho gaya, amount becomes amount - coin
            // baki recursion sambhal lega
            int recursionAns = solve(coins, amount - coin);
            // ho sakta hai recursionAns valid ho aur Invalid ho sakta hai.
            // invalid case -> recursionAns -> INT_MAX;
            // valid case -> recursion -> Not equal to INT_MAX;
            if(recursionAns != INT_MAX){
                // valid ans aaya hai
                int coinsUsed = 1 + recursionAns;
                // kya ans minimum
                MinCoinAns = min(MinCoinAns, coinsUsed);
            }
        }
    }
    return MinCoinAns;
}
int coinChange(vector<int>& coins, int amount) {
    int ans = solve (coins, amount);
    if(ans == INT_MAX){
        return -1;
    }
    return ans;
}
int main(){
    vector<int>coins={1,2,5};
    int amount = 6;
    int ans = coinChange(coins, amount);
    cout<< ans<<endl;
}