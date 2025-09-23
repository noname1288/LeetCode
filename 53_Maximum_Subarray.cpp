#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int size = nums.size();
        int current_sum = nums.at(0);
        int max_sum = nums.at(0);

        for (int i = 1; i < size; i++)
        {
            current_sum = max(current_sum, current_sum + nums.at(i));
            max_sum = max(current_sum, max_sum);
        }

        return max_sum;
    }
};

int main()
{
    int myArray[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int current_sum = myArray[0]; // tổng con hiện tại
    int max_sum = myArray[0];     // tổng con lớn nhất

    for (int i = 0; i < size; i++)
    {
        current_sum = max(myArray[i], current_sum + myArray[i]);
        // cập nhật max
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << endl;

    return 0;
}