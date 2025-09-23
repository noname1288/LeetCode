#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;
        int j = 1;
        int size = nums.size();

        int k = 0;

        while (j < size)
        {
            k++;
            if (nums[i] == nums[j])
            {
                
                nums[j] = 0;
                j++;
            }else {
                i++;
                if (i!= j)
                    swap(nums[i], nums[j]);
                j++;
            }
        }

        return k;
    }
};

int main()
{
    vector<int> input = {0, 1, 2, 3, 4};

    Solution x;
    
    cout << x.removeDuplicates(input);

    return 0;
}
