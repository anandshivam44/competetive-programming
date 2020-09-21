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

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

string decToBinary(int n)
{
    string s = "";
    for (int i = 4; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            s += "1";
        else
            s += "0";
    }
    return s;
}

void test_case()
{
    string store[5];
    string matrix[5];
    int n, b, f;
    cin >> n >> b >> f;
    for (int i = 0; i < 5; i++)
    {
        string s = "";
        for (int j = 1; j <= ((1 << 10) / (1 << (i))); j++)
        {
            s += patt[i];
        }
        matrix[i]=s;

    }
    
    // int l = ceil(log2(n));

    for (int i = 0; i < 5; i++)
    {
        string s = "";
        // for (int j = 1; j <= ((1 << l) / (1 << (i))); j++)
        // {
        //     s += patt[i];
        // }
        s = s.substr(0, n);
        cout << s << endl;
        // fflush(stdout);
        cin >> store[i];
    }
    // string tt = "";
    // for (int i = 4; i >= 0; i--)
    // {
    //     tt += store[i][n - b-1];
    // }
    // int last = binaryToDecimal(tt) + 1;
    // cout << "last " << last << endl;
    // string ta = decToBinary(last);
    // for (int i = 4; i >= 0; i--)
    // {
    //     store[i] += ta[4 - i];
    // }

    // // for (int i = 0; i < 5; i++)
    // // {
    // //     cout << store[i] << ":";
    // // }

    // int pointer = 0;
    // vector<int> ans;

    // for (int i = 0; i < n - b; i++)
    // {
    //     cout << i << "    " << endl;
    //     string binary = "";
    //     binary = binary + store[4][i] + store[3][i] + store[2][i] + store[1][i] + store[0][i];
    //     int diff;
    //     cout << "binary = " << binary << "    matrix = " << matrix[pointer % 32] << "   " << i << "   " << (pointer % 32) << endl;
    //     if (binary == matrix[pointer % 32])
    //     {
    //         pointer++;
    //     }
    //     else
    //     {

    //         diff = binaryToDecimal(matrix[pointer % 32]) - binaryToDecimal(binary);
    //         // cout << "diff = " << diff << endl;
    //         if (diff < 0)
    //         {
    //             cout << "Trigger diff < 0      diff=" << diff << endl;
    //             for (int j = pointer; j < pointer + abs(diff); j++)
    //             {
    //                 cout << "add answer " << j << endl;
    //                 ans.push_back(j);
    //             }
    //             pointer += 1 + abs(diff);
    //         }
    //         else
    //         {
    //             cout << "Trigger diff >= 0      diff=" << diff << endl;
    //             diff = 32 - (diff);

    //             for (int j = pointer; j < pointer + diff; j++)
    //             {
    //                 ans.push_back(j);
    //             }
    //             pointer += diff;
    //         }
    //     }

    //     // pointer++;
    // }

    // //cout <<a<<"\n";
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << endl;
    // fflush(stdout);
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