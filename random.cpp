#include <bits/stdc++.h>
#include <random>
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
std::random_device rd;
std::default_random_engine generator(rd()); // rd() provides a random seed
// void removeDuplicates(int arr[], int n)
// {
//     vector<int> v(arr, arr + n);
//     vector<int>::iterator it;
//     it = unique(v.begin(), v.end());
//     v.resize(distance(v.begin(), it));
//     for (it = v.begin(); it != v.end(); ++it)
//         cout << *it << " ";
//     // cout << '\n';
// }

void solve()
{

    int n = rand() % 100 + 3;
    int r = rand() % 10+ 2;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        // std::uniform_real_distribution<double> distribution(0.1, 359.9);
        // double number = distribution(generator);
        arr[i] = rand() % 360;
    }
    sort(arr, arr + n);
    int count = 1;
    int a = arr[0];
    vector<int> v;
    v.push_back(arr[0]);

    for (int i = 1; i < n; i++)
    {
        int p = arr[i];
        if (a != p)
        {
            v.push_back(arr[i]);
            count++;
            a = arr[i];
        }
    }
    cout << count << " " << r << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

int main()
{
    srand(time(NULL));
    int t = rand() % 10000 + 1;
    // cout << "t = " << t << endl;
    cout << t << endl;
    while (t--)
    {
        solve();
    }

    return 0;
}