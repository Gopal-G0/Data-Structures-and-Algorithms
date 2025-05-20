#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        long long maxSum = INT_MIN;
        int currSum = 0;
        
        for(int num : nums) {
            currSum += num;
            
            if(currSum > maxSum) {
                maxSum = currSum;
            }
            
            if(currSum < 0) currSum = 0;
        }
        
        return maxSum;
    }

int main () {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout << "Maximum Subarray Sum : " << maxSubArray(nums);
    return 0;
}