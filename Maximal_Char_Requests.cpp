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

int getMid(int s, int e)
{
    return s + (e - s) / 2;
}
int MaxUtil(int *st, int ss, int se, int l,
            int r, int node)
{
    // If segment of this node is completely
    // part of given range, then return
    // the max of segment
    if (l <= ss && r >= se)
        return st[node];

    // If segment of this node does not
    // belong to given range
    if (se < l || ss > r)
        return -1;

    // If segment of this node is partially
    // the part of given range
    int mid = getMid(ss, se);

    return max(MaxUtil(st, ss, mid, l, r,
                       2 * node + 1),
               MaxUtil(st, mid + 1, se, l,
                       r, 2 * node + 2));
}

// void updateValue(int arr[], int* st, int ss, int se,
// 				int index, int value, int node)
// {
// 	if (index < ss || index > se)
// 	{
// 		cout << "Invalid Input" << endl;
// 		return;
// 	}

// 	if (ss == se)
// 	{
// 		// update value in array and in segment tree
// 		arr[index] = value;
// 		st[node] = value;
// 	}
// 	else {
// 			int mid = getMid(ss, se);

// 			if (index >= ss && index <= mid)
// 				updateValue(arr, st, ss, mid, index,
// 							value, 2 * node + 1);
// 			else
// 				updateValue(arr, st, mid + 1, se,
// 							index, value, 2 * node + 2);

// 			st[node] = max(st[2 * node + 1],
// 					st[2 * node + 2]);
// 	}
// 	return;
// }
int getMax(int *st, int n, int l, int r)
{
    if (l < 0 || r > n - 1 || l > r)
    {
        printf("Invalid Input");
        return -1;
    }

    return MaxUtil(st, 0, n - 1, l, r, 0);
}

int constructSTUtil(string arr, int ss, int se,
                    int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);

    st[si] = max(constructSTUtil(arr, ss, mid, st,
                                 si * 2 + 1),
                 constructSTUtil(arr, mid + 1, se,
                                 st, si * 2 + 2));

    return st[si];
}
int *constructST(string arr, int n)
{
    int x = (int)(ceil(log2(n)));
    int max_size = 2 * (int)pow(2, x) - 1;
    int *st = new int[max_size];
    constructSTUtil(arr, 0, n - 1, st, 0);
    return st;
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;
    // print_array(arr);
    int *st = constructST(s, n);

    int q;
    cin >> q;
    while (q--)
    {
        int x, y, count = 0;
        cin >> x >> y;
        // cout<<" x "<<x<<" y "<<y<<endl;
        int max = getMax(st, n, x, y);
        // cout<<(char)max<<endl;
        for (int i = x; i <= y; i++)
        {
            if (s[i]<=90)
            {
                s[i]+=32;
            }
            
            if (s[i] == max)
            {
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }

    time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC << " sec" << endl;
    return 0;
}
