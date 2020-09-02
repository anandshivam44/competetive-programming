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

int minVal(int x, int y)
{
    return (x < y) ? x : y;
}
int getMid(int s, int e) { return s + (e - s) / 2; }

int RMQUtil(int *st, int ss, int se, int qs, int qe, int index)
{
    if (qs <= ss && qe >= se)
        return st[index];

    if (se < qs || ss > qe)
        return INT_MAX;

    int mid = getMid(ss, se);
    return minVal(RMQUtil(st, ss, mid, qs, qe, 2 * index + 1),
                  RMQUtil(st, mid + 1, se, qs, qe, 2 * index + 2));
}

int RMQ(int *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n - 1 || qs > qe)
    {
        cout << "Invalid Input";
        return -1;
    }

    return RMQUtil(st, 0, n - 1, qs, qe, 0);
}

int constructSTUtil(int arr[], int ss, int se,
                    int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] = minVal(constructSTUtil(arr, ss, mid, st, si * 2 + 1),
                    constructSTUtil(arr, mid + 1, se, st, si * 2 + 2));
    return st[si];
}

int *constructST(int arr[], int n)
{
    int x = (int)(ceil(log2(n)));
    int max_size = 2 * (int)pow(2, x) - 1;
    int *st = new int[max_size];
    constructSTUtil(arr, 0, n - 1, st, 0);
    return st;
}

void solve()
{
    int n, a;
    cin >> n >> a;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // print_array(arr);

    int queryArray[a][2];
    // int nn = sizeof(arr) / sizeof(arr[0]);
    int *st = constructST(arr, n);

    for (int i = 0; i < a; i++)
    {
        cin >> queryArray[i][0] >> queryArray[i][1];
        // cout << "Minimum of values in range [" << queryArray[i][0] << ", " <<queryArray[i][1]  << "] "
        //      << "is = " << RMQ(st, n, queryArray[i][0], queryArray[i][1]) << endl;

        cout<< RMQ(st, n, queryArray[i][0], queryArray[i][1]) << endl;
    }

    //cout <<a<<"\n";
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    solve();

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}