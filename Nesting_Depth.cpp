#include <iostream>
//#include <algorithm>
//#include <bits/stdc++.h>
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
    //cout << t << "\n";

    int count = 1;
    //char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    while (t--)
    {
        string s;
        string newS = "";
        string newSS = "";
        getline(cin, s);
        int l = s.length();
        int brace = 0; //++ for opening -- for closing
        int previous = 0;

        for (int i = 0; i < l; i++)
        {
            char c = s[i];            //ectracts character
            int ia = c - '0';         //converts to digit
            int diff = ia - previous; // digit -
            previous = ia;            //
            //cout << "digit " << c << "\n";
            //cout << "diff " << diff << "\n";
            if (diff > 0)
            {
                while (diff--)
                {
                    newS = newS + "(";
                    brace++;
                    //cout<<"brace "<<brace<<"\n";
                }
            }
            else if (diff < 0)
            {
                while (diff++)
                {
                    newS = newS + ")";
                    brace--;
                    //cout<<"brace "<<brace<<"\n";
                }
            }

            newS = newS + s[i];
        }
        int last_digit = s[l - 1] - '0';
        while (last_digit--)
        {
            newS = newS + ")";
            brace--;
        }

        cout << "Case #" << count << ": " << newS << "\n";
        //cout << "Case #" << count << ": " << newSS << "\n";
        count++;
    }
    return 0;
}
