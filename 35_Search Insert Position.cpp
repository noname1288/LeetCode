#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = -1;
        
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == target){
                index = i;
                break;
            } else if (nums[i] > target){
                index = i;
                break;
            }            
        }

        if (index == -1){
            index = nums.size();
        }

        return index;
    }
};