#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;

const ll inf = 1e18;
#define all(x) begin(x), end(x)
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_array(arr)                                         \
    loop(z, sizeof(arr) / sizeof(arr[0])) cout << arr[z] << " "; \
    cout << "\n"
#define print_vector(vvv)                      \
    loop(z, vvv.size()) cout << vvv[z] << " "; \
    cout << "\n"
#define print_vector_pair(vvv)                                             \
    loop(z, vvv.size()) cout << vvv[z].first << " " vvv[z].second << "\n"; \
    cout << "\n"
#define fill_my(arr, q) fill(all(arr), q)
// #define isBitSet(S, i) ((S >> i) & 1)

void solve()
{
    ifstream inFile;
    inFile.open("file_a.txt");
    ifstream inFile_b;
    inFile_b.open("file_b.txt");

    if (!inFile)
    {
        cout << "Unable to open file A";
        exit(1); // terminate with error
    }
    if (!inFile_b)
    {
        cout << "Unable to open file B";
        exit(1); // terminate with error
    }
    string x;
    string s;
    while (inFile >> x) {
        inFile_b>>s;
        if (x!=s)
        {
            cout<<x<<" : "<<s<<endl;
        }
        
    }
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}