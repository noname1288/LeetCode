#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
    }
};

int main()
{
    string input;
    cin >> input;
    map<char, char> mapBracket = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
    stack<char> brackets;
    bool value = true;

    for (char x : input)
    {
        if (x == '(' || x == '[' || x == '{')
        {
            brackets.push(x);
        }
        else
        {
            char current_bracket = x;

            if (brackets.empty())
            {
                value = false;
                break;
            }

            char expected_bracket = mapBracket[brackets.top()];
            if (current_bracket == expected_bracket)
            {
                brackets.pop();
            }
            else
            {
                value = false;
                break;
            }
        }
    }

    if (!brackets.empty()){
        value = false;
    }

    if (value)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
