#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int input[] = {18, 11, 27, 12, 14};
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        answer += (int)floor(input[i] / 12);
    }
    cout << answer << endl;

    return 0;
}