#include <bits/stdc++.h>

using namespace std;

int binary_search(int left, int right, vector<int> &list_num, int target){
    if (left > right) {
        return -1;
    }
    int middle = left + (right - left) / 2;

    if (target == list_num[middle]){
        return middle;
    }

    if (list_num[middle] < target){
        return binary_search(middle + 1, right, list_num, target);
    }

    return binary_search(left, middle - 1, list_num, target);
}


class Solution{
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() -1;
        return binary_search(left, right, nums, target);
    }
};


int main()
{
    Solution a;
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout << a.search(nums, target);
    return 0;
}
