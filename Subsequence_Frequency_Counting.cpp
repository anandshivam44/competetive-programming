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

// void combinationUtil(int arr[], int data[],
//                      int start, int end,
//                      int index, int r);

vector<int> v;

void combinationUtil(int arr[], int data[], int start, int end, int index, int r)
{

    if (index == r)
    {
        // for (int j = 0; j < r; j++)
        // {
        //     cout << data[j] << " ";
        // }
        int maxi = 0;
        for (int j = 0; j < r; j++)
        {
            maxi = max(maxi, data[j]);
        }
        int freq[maxi + 1];
        fill(freq, freq + maxi + 1, 0);
        for (int j = 0; j < r; j++)
        {
            freq[data[j]]++;
        }
        // cout << "freq " << endl;
        // print_array(freq);
        int maximum = 0;
        int ind = 0;
        for (int j = 0; j <= maxi; j++)
        {
            // maximum = max(maximum, freq[j]);
            if (freq[j] > maximum)
            {
                maximum = freq[j];
                ind = j;
            }
        }
        v.push_back(ind);

        // cout << endl;
        return;
    }

    for (int i = start; i <= end && end - i + 1 >= r - index;
         i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i + 1, end, index + 1, r);
    }
}

void printCombination(int arr[], int n)
{
    for (int r = 1; r <= n; r++)
    {
        int data[r];
        combinationUtil(arr, data, 0, n - 1, 0, r);
    }
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    v.clear();

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printCombination(arr, n);
    // cout << endl
    //      << " vector   ";

    // print_vector(v);
    // cout << endl;
    int ff[n + 1];
    fill(ff, ff + n + 1, 0);
    for (int i = 0; i < v.size(); i++)
    {
        ff[v[i]]++;
    }
    for (int i = 1; i < n + 1; i++)
    {
        cout<<ff[i]<<" ";
    }

    cout <<"\n";
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