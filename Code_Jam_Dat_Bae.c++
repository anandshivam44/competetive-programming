#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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
#define delete_by_value(vec, val) vec.erase(std::remove(vec.begin(), vec.end(), val), vec.end());

string patt[] = {"01", "0011", "00001111", "0000000011111111", "00000000000000001111111111111111"};
void test_case()
{
    string store[5];
    string matrix[5];
    int n, B, f;
    cin >> n >> B >> f;
    for (int i = 0; i < 5; i++)
    {
        string s = "";
        for (int j = 1; j <= ((1 << 10) / (1 << (i))); j++)
        {
            s += patt[i];
        }
        matrix[i] = s;
    }

    for (int i = 0; i < 5; i++)
    {
        string s = "";
        s = matrix[i].substr(0, n);
        cout << s << endl
             << flush;
        cin >> store[i];
        if (store[i] == "-1")
            exit(0);
    }
    int pointer = 0;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        string a = "";
        a = a + matrix[4][i] + matrix[3][i] + matrix[2][i] + matrix[1][i] + matrix[0][i];
        string b = "";
        b = b + store[4][pointer] + store[3][pointer] + store[2][pointer] + store[1][pointer] + store[0][pointer];
        // cout << "a = " << a << "   b = " << b << endl;
        if (a == b)
        {
            pointer++;
        }
        else
        {
            ans.push_back(i);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl
         << flush;
    int verdict;
    cin >> verdict;
    if (verdict != 1)
        exit(0);
}

int main()
{
    // FIO;

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << i << ": ";
        test_case();
    }
    return 0;
}