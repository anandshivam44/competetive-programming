#include <bits/stdc++.h>
using namespace std;

void checkMagazine(vector<string> magazine, vector<string> note)
{
    unordered_map<string, int> hash_magazine;
    unordered_map<string, int> hash_note;
    for (string word : magazine)
    {
        hash_magazine[word] += 1;
    }
    for (string word : note)
    {
        hash_note[word] += 1;
    }
    bool flag = true;
    for (auto i : hash_note)
    {
        if (i.second != hash_magazine[i.first])
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    vector<string> magazine;
    vector<string> note;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        string inp;
        cin >> inp;
        magazine.push_back(inp);
    }
    for (int i = 0; i < n; i++)
    {
        string inp;
        cin >> inp;
        note.push_back(inp);
    }
    checkMagazine(magazine, note);

    return 0;
}