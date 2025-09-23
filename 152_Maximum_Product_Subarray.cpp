#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = nums.at(0);
        int minProduct = nums.at(0);
        int globalProduct = nums.at(0);

        for (int i=1; i< nums.size(); i++){
            int currentValue = nums.at(i);
            maxProduct = max (nums.at(i), maxProduct * currentValue);
            minProduct = min ()
        }
    }
};

int main(){
    vector<int> myVector = {2,3,-2,4} ;
    Solution a;
    cout << a.maxProduct(myVector) << endl;
}