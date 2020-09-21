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

void removeDuplicates(int arr[], int n)
{

    // Initialise a vector
    // to store the array values
    // and an iterator
    // to traverse this vector
    vector<int> v(arr, arr + n);
    vector<int>::iterator it;

    // using unique() method to remove duplicates
    it = unique(v.begin(), v.end());

    // resize the new vector
    v.resize(distance(v.begin(), it));

    // Print the array with duplicates removed
    // cout << "\nAfter removing duplicates:\n";
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    // cout << '\n';
}

void solve()
{

    int n = rand() % 100 + 3;
    int r = rand() % 100 + 2;
    cout << n << " " << r << endl;
    int arr[n];
    // vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        // arr.push_back(rand() % 360);
        arr[i] = rand() % 360;
    }
    // sort(arr.begin(), arr.end());
    sort(arr, arr + n);
    removeDuplicates(arr, n);
    // print_vector(arr);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << endl;
}

int main()
{
    // clock_t time_req;
    // time_req = clock();
    // cin.sync_with_stdio(false);
    // cin.tie(0);
    // srand(time(0));
    // cout << "Hi" << endl;
    srand(time(NULL));
    int t = rand() % 100 + 1;
    cout << t << endl;
    while (t--)
    {
        solve();
    }

    return 0;
}