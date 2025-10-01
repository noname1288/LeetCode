#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> a(numRows);

        for (int i = 0; i < numRows; i++)
        {
            a[i].resize(i + 1);
            a[i][0] = a[i][i] = 1;

            for (int j = 1; j < i; j++)
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; // công thức Pascal
            }
        }

        return a;
    }
};

int main()
{
    int numRows = 5;
    vector<vector<int>> a;

    Solution x;
    a = x.generate(numRows);

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}