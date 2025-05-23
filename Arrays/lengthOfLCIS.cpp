#include <iostream>
#include<vector>
using namespace std;

int findLengthOfLCIS(vector<int> &nums) {

    int LengthOfLCIS = 1;
    int LengthOfCIS = 1;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            LengthOfCIS++;

            if (LengthOfCIS > LengthOfLCIS)
            {
                LengthOfLCIS = LengthOfCIS;
            }
        }

        else
        {
            LengthOfCIS = 1;
        }
    }

    return LengthOfLCIS;
}

int main() {

    vector<int> nums = {2,4,7,9,11,12,5,6,7,3};
    int lengthOfLCIS = findLengthOfLCIS(nums);

    cout << "Length Of Longest Continuous Subsequence : " << lengthOfLCIS << endl;
    return 0;
}