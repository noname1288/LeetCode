#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] <= nums2[j])
            {
                nums1[k] = nums2[j];
                j--;
            }
            else
            {
                nums1[k] = nums1[i];
                i--;
            }
            k--;
        }

        while (j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main()
{
    vector<int> input_1 = {2,0};
    vector<int> input_2 = {1};
    int m =1;
    int n =1;

    Solution x;
    x.merge(input_1, m, input_2, n);
    
    for (int i : input_1){
        cout << i << " ";
    }

    return 0;
}