#include <iostream>
//#include <algorithm>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    getline(cin, a);
    stringstream geek(a);
    int t;
    geek >> t;
    int count = 1;
    while (t--)
    {
        string s;
        string newS = "";
        string newSS = "";
        getline(cin, s);
        int l = s.length();
        bool b = false;
        char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        for (int i = 0; i < l; i++)
        {
            if (l == 1 && s[0] == digits[1])
            { //only 1
                newS = newS + "(" + s[i] + ")";
            }
            else if (i == 0 && s[0] == digits[1] && s[1] != digits[1])
            { //start lone 1 corner case
                newS = newS + "(" + s[i] + ")";
            }
            else if (i == 0 && s[0] == digits[1])
            { //start 1
                newS = newS + "(" + s[i];
            }
            else if (i == l - 1 && s[i] == digits[1] && s[i - 1] != digits[1])
            { //end lone 1 corner case
                newS = newS + "(" + s[i] + ")";
            }
            else if (i == l - 1 && s[i] == digits[1])
            { //end is one
                newS = newS + s[i] + ")";
            }
            else if (s[i] == digits[1] && s[i - 1] != digits[1] && s[i + 1] != digits[1])
            { //only 1
                newS = newS + "(" + s[i] + ")";
            }
            else if (s[i] == digits[1] && s[i - 1] != digits[1])
            {
                newS = newS + "(" + s[i];
            }
            else if (s[i] == digits[1] && s[i + 1] != digits[1])
            {
                b = true;
                newS = newS + s[i] + ")";
            }
            else if (s[i] == digits[1])
            {
                b = true;
                newS = newS + s[i];
            }

            else if (s[i] != digits[1])
            {
                b = false;
                newS = newS + s[i];
            }
        }
        cout << "Case #" << count << ": " << newS << "\n";
        count++;
    }
    return 0;
}
