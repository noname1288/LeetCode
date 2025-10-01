#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int count = 0;

        for (int i = 0; i<length; i++){
            if (nums[i] == val){
                nums[i] = -1;
                count ++;
            }
        }

        sort(nums.begin(), nums.end(), greater<int>());

        return length - count;
    }
};

int main(){

    return 0;
}