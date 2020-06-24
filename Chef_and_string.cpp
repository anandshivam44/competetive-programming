#include <bits/stdc++.h>
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

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int half = n / 2;
    int count = 0;
    int index_0 = 0, index_1 = 0, max_even = 0, max_odd = 0;

    // if (n % 2 == 0)
    // {
    //     for (int i = 0; i < n; i = i + 2)
    //     {
    //         if ((s[i] == 'x' && s[i + 1] == 'y') || (s[i] == 'y' && s[i + 1] == 'x'))
    //         {
    //             index_0++;
    //         }
    //     }
    //     for (int i = 1; i < n - 1; i++)
    //     {
    //         if ((s[i] == 'x' && s[i + 1] == 'y') || (s[i] == 'y' && s[i + 1] == 'x'))
    //         {
    //             index_1++;
    //         }
    //     }
    //     max_even = max(index_0, index_1);
    // }
    // else
    // {
    //     for (int i = 0; i < n-1; i = i + 2)
    //     {
    //         if ((s[i] == 'x' && s[i + 1] == 'y') || (s[i] == 'y' && s[i + 1] == 'x'))
    //         {
    //             index_0++;
    //         }
    //     }
    //     for (int i = 1; i < n ; i++)
    //     {
    //         if ((s[i] == 'x' && s[i + 1] == 'y') || (s[i] == 'y' && s[i + 1] == 'x'))
    //         {
    //             index_1++;
    //         }
    //     }
    //     max_odd = max(index_0, index_1);
    // }
    // count=max(max_odd,max_even);
    int arr[n];
    fill(arr, arr + n, 0);
    // print_array(arr);

    char start = s[0];
    char alternate;
    if (start == 'x')
    {
        alternate = 'y';
    }
    else
    {
        alternate = 'x';
    }
    // cout << start << " - " << alternate << endl;

    for (int i = 0; i < n - 1; i++)
    {

        if (s[i] == start && s[i + 1] == alternate && arr[i + 1] == 0)
        {
            count++;
            arr[i] = 1;
            arr[i + 1] = 1;
        }
        else if (s[i] == start && s[i - 1] == alternate && arr[i - 1] == 0)
        {
            count++;
            arr[i] = 1;
            arr[i - 1] = 1;
        }
    }
    // print_array(arr);
    int temp = 0;
    char tt=start;
    start=alternate;
    alternate=tt;
    for (int i = 0; i < n - 1; i++)
    {

        if (s[i] == start && s[i + 1] == alternate && arr[i + 1] == 0)
        {
            temp++;
            arr[i] = 1;
            arr[i + 1] = 1;
        }
        else if (s[i] == start && s[i - 1] == alternate && arr[i - 1] == 0)
        {
            temp++;
            arr[i] = 1;
            arr[i - 1] = 1;
        }
    }
    count=max(count,temp);
    cout << count << "\n";
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}