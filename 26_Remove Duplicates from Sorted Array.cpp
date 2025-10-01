#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int length = nums.size();
        int j = 1;

        for (int i = 1; i < length; i++)
        {
            if (nums[i] != nums[i-1]){
                nums[j] = nums[i];
                j++;
            }
        }

        return j;
    }


};
