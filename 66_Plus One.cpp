#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int length = digits.size();
        int remember = 1;
        int temp;

        for (int i = length - 1; i >= 0; i--)
        {
            temp = digits[i] + remember;
            if (temp % 10 == 0){
                digits[i] = 0;
                remember = 1;
            }else {
                digits[i] = temp;
                remember = 0;
                break;
            }
        }

        if (remember){
            digits.insert(digits.begin(), remember);
        }

        return digits;
    }
};

int main()
{
    vector<int> input = {9, 9, 9};
    vector<int> output ; 
    
    Solution x;
    output = x.plusOne(input);

    for (int i: output){
        cout << i << " ";
    }

    return 0;
}
