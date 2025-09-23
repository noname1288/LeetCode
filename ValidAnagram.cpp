#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }

        int count[200];
        memset(count, 0, sizeof(count));

        for (char x : s)
        {
            int pos = int(x);
            count[pos]++;
        }

        for (char x : t){
            int pos = int(x);
            if (count[pos] > 0) count[pos] -= 1;
            else if (count[pos] == 0) count[pos] += 9999;
        }

        for (int it : count){
            if (it != 0){
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution x;
    string s = "aacc";
    string t = "ccac";
    cout << x.isAnagram(s, t) << endl;
}