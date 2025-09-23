#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        //to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        //remove white space
        string res = "";
        for (int i =0; i < s.length(); i++){
            if (isalnum(s.at(i))){
                res += s.at(i);
            }
        }

        //reverse string 
        string res2 = res;
        reverse(res.begin(), res.end());

        if (res == res2){
            return true;
        }

        return false;
    }
};

int main()
{
    Solution x;
    string test = "";
    cout << x.isPalindrome(test);

}